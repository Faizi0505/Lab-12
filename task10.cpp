#include <iostream>
using namespace std;

int main() {
    // Variables to store the counts
    int number, totalDigits = 0, evenDigits = 0, oddDigits = 0;
    
    // Prompt user for input
    cout << "Enter a number: ";
    cin >> number;

    // If the input is negative, make it positive to handle the digits
    if (number < 0) {
        number = -number;
    }

    // While loop to count digits and classify them as even or odd
    while (number > 0) {
        int digit = number % 10;  // Get the last digit
        totalDigits++;            // Increment total digits counter
        
        if (digit % 2 == 0) {
            evenDigits++;         // Increment even digits counter
        } else {
            oddDigits++;          // Increment odd digits counter
        }

        number /= 10;             // Remove the last digit from the number
    }

    // Display the results
    cout << "Total number of digits: " << totalDigits << endl;
    cout << "Total number of even digits: " << evenDigits << endl;
    cout << "Total number of odd digits: " << oddDigits << endl;

    return 0;
}
