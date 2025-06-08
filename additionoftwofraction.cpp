#include<iostream>
using namespace std;

int main() {
    // Step 1: Initialize variables
    int n1, d1, n2, d2;
    
    // Step 2: Take input
    cout << "Enter numerator and denominator of first fraction: ";
    cin >> n1 >> d1;
    
    cout << "Enter numerator and denominator of second fraction: ";
    cin >> n2 >> d2;

    // Step 3: Calculate new numerator and denominator
    int x = n1 * d2 + d1 * n2;  // new numerator
    int y = d1 * d2;            // new denominator

    // Step 4: Find HCF (same as GCD)
    int hcf = 1;
    for (int i = 1; i <= x || i <= y; i++) {
        if (x % i == 0 && y % i == 0)
            hcf = i;
    }

    // Step 5: Display simplified result
    cout << "Result: " << x / hcf << "/" << y / hcf << endl;

    return 0;
}
