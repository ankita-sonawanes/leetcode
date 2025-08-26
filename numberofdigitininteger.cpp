
#include<iostream>
using namespace std;

int main() {
    int n, digit = 0;
    cout << "Enter the number: ";
    cin >> n;

    if (n == 0) { // Special case: 0 has 1 digit
        digit = 1;
    } else {
        while (n > 0) {
            digit++;
            n = n / 10;
        }
    }

    cout << "Number of digits: " << digit;
    return 0;
}
