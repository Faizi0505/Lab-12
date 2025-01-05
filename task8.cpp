#include <iostream>
using namespace std;

int findLargestOfFive() {
    int largest = 0; // Initialize with 0
    int number;

    // Prompt the user to input 5 numbers
    cout << "Enter 5 numbers: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> number;

        // Check if the current number is larger than the current largest
        if (i == 0 || number > largest) { // Update the largest number
            largest = number;
        }
    }

    // Display the largest number
    cout << "The largest number is: " << largest << endl;

    return largest;
}

int main() {
    findLargestOfFive();
    return 0;
}
