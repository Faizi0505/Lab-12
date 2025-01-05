#include <iostream>
using namespace std;

void analyzeRangeWithMidpoint() {
    int a, b;

    // Input numbers from user
    cout << "Enter the start of the range (a): ";
    cin >> a;
    cout << "Enter the end of the range (b): ";
    cin >> b;

    // Calculate midpoint of the range
    double midpoint = (a + b) / 2.0;

    // Iterate through the range
    while (a <= b) {
        if (a < midpoint) {
            cout << a << " is less than the midpoint (" << midpoint << ")." << endl;
        } else if (a > midpoint) {
            cout << a << " is greater than the midpoint (" << midpoint << ")." << endl;
        } else {
            cout << a << " is equal to the midpoint (" << midpoint << ")." << endl;
        }
        a++;
    }
}

int main() {
    analyzeRangeWithMidpoint();
    return 0;
}
