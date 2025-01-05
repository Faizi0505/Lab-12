#include <iostream>
using namespace std;

void reverseAndSumDigits() {
    // Input number from user
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Handle special case for zero
    if (number == 0) {
        cout << "Reverse: 0" << endl;
        cout << "Sum: 0" << endl;
        return;
    }

    // Initialize variables
    int reversedNumber = 0;
    int sumOfDigits = 0;
    int originalNumber = number; // Save original number for display purposes

    // Process each digit
    while (number > 0) {
        int digit = number % 10;               // Extract last digit
        reversedNumber = reversedNumber * 10 + digit;  // Update reverse
        sumOfDigits += digit;                  // Add digit to sum
        number /= 10;                          // Remove last digit
    }

    // Display results
    cout << "Reverse: " << reversedNumber << endl;
    cout << "Sum: " << sumOfDigits << endl;
}

int main() {
    reverseAndSumDigits();
    return 0;
}
