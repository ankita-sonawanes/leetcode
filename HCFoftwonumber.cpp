#include<iostream>
using namespace std;

int main() {
    int n1, n2, HCF = 1;
    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;

    // Display divisors of n1
    
    cout << "\nDivisors of " << n1<< ": ";

    for (int i = 1; i <= n1; i++) {
        if (n1 % i == 0) {
            cout << i << " ";
        }
    }

    // Display divisors of n2
    cout << "\nDivisors of " << n2 << ": ";
    for (int i = 1; i <= n2; i++) {
        if (n2 % i == 0) {
            cout << i << " ";
        }
    }

    // Display common divisors and find HCF
    cout << "\nCommon divisors of " << n1 << " and " << n2 << ": ";
    for (int i = 1; i <= n1 && i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            cout << i << " ";
            HCF = i;
        }
    }

    cout << "\nHCF of " << n1 << " and " << n2 << " is: " << HCF << endl;
    return 0;
}
