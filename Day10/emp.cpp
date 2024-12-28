#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

class Employee {
private:
    int Id;
    string name;
    string position;

public:
    // Setters
    void setId(int i) { Id = i; }
    void setName(string n) { name = n; }
    void setPosition(string p) { position = p; }

    // Getters
    int getId() const { return Id; }
    string getName() const{ return name; }
    string getPosition() const { return position; }

    // Constructor
    Employee(int i, string n, string p) {
        setId(i);
        setName(n);
        setPosition(p);
    }

    // Update employee details
    void updateEmployee(string newPosition, string newName) {
        setPosition(newPosition);
        setName(newName);
    }

    // Display employee details
    void ViewEmployee() const {
        cout << "--------------------------------\n";
        cout << "ID           : " << getId() << endl;
        cout << "Employee Name: " << getName() << endl;
        cout << "Position     : " << getPosition() << endl;
        cout << "--------------------------------\n";
    }
};

// Display menu
void displayMenu() {
    cout << "\n==== WELCOME TO THE COMPANY ====\n";
    cout << "1. Add Employee\n";
    cout << "2. Display Employees\n";
    cout << "3. Update Employee\n";
    cout << "4. Exit Company\n";
    cout << "=================================\n";
}

int main() {
    vector<Employee> employees; // Vector to store employee records
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
            continue;
        }

        switch (choice) {
        case 1: {
            // Add a new employee
            string name, position;
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            // Validate ID input
            if (cin.fail() || id < 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid ID! Please enter a positive integer.\n";
                continue;
            }

            // Check for duplicate ID
            bool idExists = false;
            for (const auto& emp : employees) {
                if (emp.getId() == id) {
                    idExists = true;
                    break;
                }
            }
            if (idExists) {
                cout << "Employee with this ID already exists!\n";
                continue;
            }

            cout << "Enter Employee Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Employee Position: ";
            getline(cin, position);

            Employee newEmployee(id, name, position);
            employees.push_back(newEmployee); // Add the new employee to the vector
            cout << "Employee added successfully!\n";
            break;
        }
        case 2:
            // Display all employees
            if (employees.empty()) {
                cout << "No employees in the company!\n";
            } else {
                cout << "\nEmployee List:\n";
                for (const auto& emp : employees) {
                    emp.ViewEmployee(); // Display each employee's details
                }
            }
            break;
        case 3: {
            // Update an existing employee
            int id;
            string newName, newPosition;

            cout << "Enter Employee ID to update: ";
            cin >> id;

            // Find employee by ID
            auto it = find_if(employees.begin(), employees.end(),
                              [id](Employee& emp) { return emp.getId() == id; });

            if (it == employees.end()) {
                cout << "Employee with this ID does not exist!\n";
                continue;
            }

            cout << "Enter new position: ";
            cin.ignore();
            getline(cin, newPosition);

            cout << "Enter corrected name: ";
            getline(cin, newName);

            it->updateEmployee(newPosition, newName); // Update the employee details
            cout << "Employee information updated successfully!\n";
            break;
        }
        case 4:
            cout << "Exiting Company. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 4);

    return 0;
}
