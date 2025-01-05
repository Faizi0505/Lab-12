#include <iostream>
using namespace std;

void sumOfDigitsAndCheckDivisibility() {
    int n;

    // Input number from user
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int originalNumber = n; // Save original number for display purposes

    // Calculate sum of digits
    while (n > 0) {
        int digit = n % 10; // Extract last digit
        sum += digit;      // Add digit to sum
        n /= 10;           // Remove last digit
    }

    // Check divisibility by 3
    cout << "Sum of digits: " << sum << endl;
    if (sum % 3 == 0) {
        cout << "The sum is divisible by 3." << endl;
    } else {
        cout << "The sum is not divisible by 3." << endl;
    }
}

int main() {
    sumOfDigitsAndCheckDivisibility();
    return 0;
}
