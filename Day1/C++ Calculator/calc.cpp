#include <iostream>
using namespace std;

int main() {
    char op;
    double first, second;

    // Prompt user for operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Prompt user for operands
    cout << "Enter two operands: ";
    cin >> first >> second;

    // Perform operation based on operator
    switch (op) {
        case '+':
            cout << first << " + " << second << " = " << first + second << endl;
            break;
        case '-':
            cout << first << " - " << second << " = " << first - second << endl;
            break;
        case '*':
            cout << first << " * " << second << " = " << first * second << endl;
            break;
        case '/':
            if (second != 0) {
                cout << first << " / " << second << " = " << first / second << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error! Invalid operator entered." << endl;
    }

    return 0;
}
