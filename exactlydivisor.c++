#include <iostream>
using namespace std;

int total_no_of_divisor(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            count++;
    }
    return count;
}

int main() {
    int n, x, c = 0;
    cout << "Enter the range (n): ";
    cin >> n;
    cout << "Enter the divisor count (x): ";
    cin >> x;

    cout << "Numbers having exactly " << x << " divisors are:\n";
    for (int i = 1; i <= n; i++) {
        if (total_no_of_divisor(i) == x) {
            cout << i << " ";
            c++;
        }
    }

    cout << "\n\nTotal = " << c << endl;
    return 0;
}
