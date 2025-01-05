#include <iostream>
using namespace std;

void printMultiplicationTable() {
    int x, end;

    // Input number from user
    cout << "Enter a positive number: ";
    cin >> x;

    // Check if the number is positive
    if (x <= 0) {
        cout << "Number must be greater than 0." << endl;
        return;
    }

    // Input end point for the table
    cout << "Enter the end point for the multiplication table: ";
    cin >> end;

    // Print the multiplication table
    for (int i = 1; i <= end; i++) {
        cout << x << " x " << i << " = " << x * i << endl;
    }
}

int main() {
    printMultiplicationTable();
    return 0;
}
