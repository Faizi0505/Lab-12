#include <iostream>
using namespace std;

void checkEvenOdd(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " is even" << endl;
        } else {
            cout << i << " is odd" << endl;
        }
    }
}

int main() {
    // Input number from user
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check even or odd for each number from 1 to n
    checkEvenOdd(n);

    return 0;
}
