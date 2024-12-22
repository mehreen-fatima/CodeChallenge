#include <iostream>
#include <vector>
using namespace std;

class Library {
private:
    string name;
    int ISBN;
    string genre;

public:
    // Constructor
    Library(string n = "", int i = 0, string g = "") : name(n), ISBN(i), genre(g) {}

    // Setters
    void setName(string n) { name = n; }
    void setISBN(int i) { ISBN = i; }
    void setGenre(string g) { genre = g; }

    // Getters
    string getName() { return name; }
    int getISBN() { return ISBN; }
    string getGenre() { return genre; }

    // Display details
    void displayBook() const{
        cout << "Name: " << name << ", ISBN: " << ISBN << ", Genre: " << genre << endl;
    }
};

int main() {
    vector<Library> books; // Using a vector to store Library objects
    string name, genre;
    int ISBN;
    char choice;

    do {
        int BkNo;
        cout << "How many books do you want to enter? ";
        cin >> BkNo;

        for (int i = 0; i < BkNo; i++) {
            cin.ignore(); // Clear the input buffer
            cout << "Enter book name: ";
            getline(cin, name);
            cout << "Enter book ISBN: ";
            cin >> ISBN;
            cin.ignore(); // Clear the input buffer again
            cout << "Enter book genre: ";
            getline(cin, genre);

            books.emplace_back(name, ISBN, genre); // Add a new book to the vector
        }

        cout << "Do you want to add more books? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // Display all books
    cout << "\nBooks entered:\n";
    for (const auto &book : books) {
        book.displayBook();
    }

    return 0;
}

