#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class Items {
private:
    string name;
    float price;
    int quantity;

public:
    // Setters
    void setName(string n) {
        name = n;
    }
    void setPrice(float p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }

    // Getters
    string getName() {
        return name;
    }
    float getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }

    // Constructor
    Items(string n, float p, int q) {
        setName(n);
        setPrice(p);
        setQuantity(q);
    }

    // Methods
    void updateItem(float p, int q) {
        setPrice(p);
        setQuantity(q);
    }

    void displayItem(int id) {
        // Print the item details
        cout << "Item ID: " << id
             << " | Name: " << getName()
             << " | Price: $" << getPrice()
             << " | Quantity: " << getQuantity() << endl;
    }
};

void displayMenu() {
    cout << "\n==== WELCOME TO THE INVENTORY ====\n";
    cout << "1. Add Item\n";
    cout << "2. Display Items\n";
    cout << "3. Update Item\n";
    cout << "4. Exit Inventory\n";
    cout << "=================================\n";
}

int main() {
    vector<Items> inventory; // Vector to store inventory items
    int choice;

    do {
        displayMenu(); // Display the menu
        cout << "Enter your choice: ";

        // Validate the input type
        if (!(cin >> choice)) {
            // Clear the input stream and ignore invalid input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number.\n";
            continue; // Skip to the next iteration of the loop
        }

        switch (choice) {
        case 1: {
            // Add a new item
            string name;
            float price;
            int quantity;
            cout << "Enter item name: ";
            cin >> name;
            cout << "Enter item price: ";
            cin >> price;
            if (cin.fail() || price < 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid price! Please enter a positive number.\n";
                continue;
            }
            cout << "Enter item quantity: ";
            cin >> quantity;
            if (cin.fail() || quantity < 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid quantity! Please enter a positive integer.\n";
                continue;
            }

            Items newItem(name, price, quantity);
            inventory.push_back(newItem); // Add the new item to the vector
            cout << "Item added successfully!\n";
            break;
        }
        case 2:
            // Display all items
            if (inventory.empty()) {
                cout << "No items in inventory!\n";
            } else {
                cout << "\nInventory List:\n";
                for (size_t i = 0; i < inventory.size(); i++) {
                    inventory[i].displayItem(i + 1); // Display each item's details
                }
            }
            break;
        case 3: {
            // Update an existing item
            int id;
            float newPrice;
            int newQuantity;
            cout << "Enter item ID to update: ";
            cin >> id;

            if (cin.fail() || id <= 0 || id > inventory.size()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid ID! Please enter a valid item ID.\n";
                continue;
            }

            cout << "Enter new price: ";
            cin >> newPrice;
            if (cin.fail() || newPrice < 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid price! Please enter a positive number.\n";
                continue;
            }

            cout << "Enter new quantity: ";
            cin >> newQuantity;
            if (cin.fail() || newQuantity < 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid quantity! Please enter a positive integer.\n";
                continue;
            }

            inventory[id - 1].updateItem(newPrice, newQuantity); // Update the item
            cout << "Item updated successfully!\n";
            break;
        }
        case 4:
            cout << "Exiting inventory. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 4);

    return 0;
}

