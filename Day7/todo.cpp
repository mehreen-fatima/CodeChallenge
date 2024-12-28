#include <iostream>
#include <vector>
#include <string> // For using std::string
using namespace std;

// Task class to represent individual tasks in the To-Do list
class Task {
    string description; // Description of the task
    string status;      // Status of the task (e.g., Pending, Completed)

public:
    // Setters: Functions to set the values of private members
    void setDescription(string des) {
        description = des; // Assign the description to the task
    }
    void setStatus(string sta) {
        status = sta; // Assign the status to the task
    }

    // Getters: Functions to retrieve the values of private members
    string getDescription() {
        return description; // Return the task description
    }
    string getStatus() {
        return status; // Return the task status
    }

    // Constructor: Initializes a Task object with a description and status
    Task(string d, string s) {
        setDescription(d); // Set the description using the setter
        setStatus(s);      // Set the status using the setter
    }

    // Method to display a single task
    void displayTask(int id) {
        // Print the task ID, description, and status
        cout << "Task ID: " << id 
             << " | Description: " << description 
             << " | Status: " << status << endl;
    }
};

// Function to display the menu options to the user
void displayMenu() {
    cout << "\n=== TO-DO LIST ===\n";       // Menu header
    cout << "1. Add a Task\n";             // Option to add a task
    cout << "2. View All Tasks\n";         // Option to view all tasks
    cout << "3. Delete a Task\n";          // Option to delete a task
    cout << "4. Exit\n";                   // Option to exit the program
    cout << "Enter your choice: ";         // Prompt for user input
}

int main() {
    vector<Task> tasks; // Vector to store a dynamic list of Task objects
    char choice;        // Variable to store the user's choice to continue or exit the menu

    do {
        displayMenu(); // Display the menu to the user
        int option;
        cin >> option; // Read the user's menu option

        switch (option) {
        case 1: { // Option 1: Add a task
            cout << "Enter task description: ";
            cin.ignore();          // Clear the input buffer to avoid skipping input
            string description;
            getline(cin, description); // Read the full line as the task description
            tasks.emplace_back(description, "Pending"); // Add a new task to the vector with "Pending" status
            cout << "Task added successfully!\n";
            break;
        }
        case 2: { // Option 2: View all tasks
            if (tasks.empty()) { // Check if the task list is empty
                cout << "No tasks available.\n"; // Inform the user that no tasks exist
            } else {
                cout << "\n=== TASK LIST ===\n"; // Header for the task list
                for (size_t i = 0; i < tasks.size(); ++i) {
                    // Display each task with its 1-based ID
                    tasks[i].displayTask(i + 1);
                }
            }
            break;
        }
        case 3: { // Option 3: Delete a task
            cout << "Enter Task ID to delete: ";
            int id;
            cin >> id; // Read the ID of the task to delete
            if (id > 0 && id <= static_cast<int>(tasks.size())) {
                // If the ID is valid (within the range of the vector)
                tasks.erase(tasks.begin() + (id - 1)); // Remove the task at the specified position
                cout << "Task deleted successfully!\n";
            } else {
                cout << "Invalid Task ID.\n"; // Inform the user of an invalid ID
            }
            break;
        }
        case 4: // Option 4: Exit the program
            cout << "Exiting the To-Do List App. Have a great day!\n";
            break;

        default: // If the user enters an invalid option
            cout << "Invalid choice. Please try again.\n";
        }

        if (option != 4) { // If the user didn't choose to exit
            cout << "\nDo you want to return to the menu? (y/n): ";
            cin >> choice; // Ask if the user wants to continue
        } else {
            choice = 'n'; // Automatically set to exit if the user chose option 4
        }

    } while (choice == 'y' || choice == 'Y'); // Loop until the user chooses to exit

    return 0; // End the program
}
