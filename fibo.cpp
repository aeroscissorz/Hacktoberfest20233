#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function to print a Fibonacci sequence of 'n' terms
void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci Sequence: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int choice;
    cout << "Welcome to Hacktoberfest C++ Program!" << endl;

    do {
        cout << "Choose an option:" << endl;
        cout << "1. Calculate Factorial" << endl;
        cout << "2. Generate Fibonacci Sequence" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int num;
                cout << "Enter a number: ";
                cin >> num;
                cout << "Factorial of " << num << " is " << factorial(num) << endl;
                break;
            case 2:
                int terms;
                cout << "Enter the number of terms: ";
                cin >> terms;
                fibonacci(terms);
                break;
            case 3:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
