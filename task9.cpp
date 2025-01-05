#include <iostream>
using namespace std;

int sum_of_odds(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            total += i;
        }
    }
    return total;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sum_of_odds(n);
    cout << "The sum of all odd numbers between 1 and " << n << " is: " << result << endl;

    return 0;
}
