#include <iostream>
using namespace std;

void countDivisibleByThree() {
    int n;

    // Input number from user
    cout << "Enter a number (n): ";
    cin >> n;

    int count = 0;

    // Count numbers divisible by 3
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            count++;
        }
    }

    // Display result
    cout << "There are " << count << " numbers between 1 and " << n << " that are divisible by 3." << endl;
}

int main() {
    countDivisibleByThree();
    return 0;
}
