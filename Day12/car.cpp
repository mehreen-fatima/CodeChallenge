#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Car {
    int id;
    string brand, model;
    double price;

public:
    Car(int id, string brand, string model, double price)
        : id(id), brand(brand), model(model), price(price) {}

    int getId() const { return id; }
    string getBrand() const { return brand; }
    string getModel() const { return model; }
    double getPrice() const { return price; }

    void displayCarDetails() const {
        cout << "ID: " << id << ", Brand: " << brand
             << ", Model: " << model << ", Price: $" << price << endl;
    }
};

class Dealership {
    vector<Car> inventory;

public:
    void addCar(int id, string brand, string model, double price) {
        inventory.emplace_back(id, brand, model, price);
        cout << "Car added successfully!\n";
    }

    void viewInventory() const {
        if (inventory.empty()) {
            cout << "No cars in inventory.\n";
        } else {
            for (const auto& car : inventory) {
                car.displayCarDetails();
            }
        }
    }

    void sellCar(int id) {
        for (auto it = inventory.begin(); it != inventory.end(); ++it) {
            if (it->getId() == id) {
                inventory.erase(it);
                cout << "Car sold successfully!\n";
                return;
            }
        }
        cout << "Car with ID " << id << " not found.\n";
    }
};

int main() {
    Dealership dealership;
    int choice;

    do {
        cout << "\n--- Car Dealership Menu ---\n";
        cout << "1. Add Car\n";
        cout << "2. View Inventory\n";
        cout << "3. Buy a Car\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number.\n";
            continue;
        }

        switch (choice) {
        case 1: {
            int id;
            string brand, model;
            double price;

            cout << "Enter Car ID: ";
            cin >> id;
            cout << "Enter Brand: ";
            cin >> brand;
            cout << "Enter Model: ";
            cin >> model;
            cout << "Enter Price: ";
            cin >> price;

            dealership.addCar(id, brand, model, price);
            break;
        }
        case 2:
            dealership.viewInventory();
            break;
        case 3: {
            int id;
            cout << "Enter Car ID to buy: ";
            cin >> id;
            dealership.sellCar(id);
            break;
        }
        case 4:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
