#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Simple Calculator" << endl;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    if (op == '+') {
        cout << "Result: " << a + b << endl;
    } else if (op == '-') {
        cout << "Result: " << a - b << endl;
    } else if (op == '*') {
        cout << "Result: " << a * b << endl;
    } else if (op == '/') {
        if (b != 0) {
            cout << "Result: " << a / b << endl;
        } else {
            cout << "Error: cannot divide by zero" << endl;
        }
    } else {
        cout << "Invalid operator" << endl;
    }

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
