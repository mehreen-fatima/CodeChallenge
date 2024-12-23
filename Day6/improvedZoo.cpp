#include <iostream>
#include <vector>
#include <memory> // For smart pointers
using namespace std;

// Base class
class Animal {
public:
    virtual void eat() {
        cout << "Animal is eating." << endl;
    }

    virtual void makeSound() {
        cout << "Animal is making a sound." << endl;
    }

    virtual ~Animal() {} // Virtual destructor for proper cleanup
};

// Derived class: Lion
class Lion : public Animal {
public:
    void eat() override {
        cout << "Lion is eating meat." << endl;
    }

    void makeSound() override {
        cout << "Lion is roaring." << endl;
    }
};

// Derived class: Bird
class Bird : public Animal {
public:
    void eat() override {
        cout << "Bird is eating seeds." << endl;
    }

    void makeSound() override {
        cout << "Bird is chirping." << endl;
    }
};

// Derived class: Zebra
class Zebra : public Animal {
public:
    void eat() override {
        cout << "Zebra is eating grass." << endl;
    }

    void makeSound() override {
        cout << "Zebra is braying." << endl;
    }
};

// Function to display menu
void displayMenu() {
    cout << "\nWelcome to the Zoo!\n";
    cout << "1. Feed the Lion\n";
    cout << "2. Feed the Bird\n";
    cout << "3. Feed the Zebra\n";
    cout << "4. Hear the Lion's Sound\n";
    cout << "5. Hear the Bird's Sound\n";
    cout << "6. Hear the Zebra's Sound\n";
    cout << "7. Exit\n";
    cout << "Choose an option: ";
}

// Main function
int main() {
    // Create objects of different animals
    unique_ptr<Animal> lion = make_unique<Lion>();
    unique_ptr<Animal> bird = make_unique<Bird>();
    unique_ptr<Animal> zebra = make_unique<Zebra>();

    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                lion->eat();
                break;
            case 2:
                bird->eat();
                break;
            case 3:
                zebra->eat();
                break;
            case 4:
                lion->makeSound();
                break;
            case 5:
                bird->makeSound();
                break;
            case 6:
                zebra->makeSound();
                break;
            case 7:
                cout << "Thank you for visiting the zoo! Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}
