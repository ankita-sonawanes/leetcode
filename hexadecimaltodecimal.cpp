#include<iostream>
#include<string.h>
using namespace std;

int main() {
    char hexa[100];
    int sum = 0, len, base = 1;

    cout << "Enter the hexadecimal number: ";
    cin >> hexa;

    len = strlen(hexa);

    for(int i = len - 1; i >= 0; i--) {
        char ch = hexa[i];
        int value;

        if(ch >= '0' && ch <= '9') {
            value = ch - '0';
        }
        else if(ch >= 'A' && ch <= 'F') {
            value = ch - 'A' + 10;
        }
        else if(ch >= 'a' && ch <= 'f') {
            value = ch - 'a' + 10;
        }
        else {
            cout << "Invalid character in input: " << ch << endl;
            return 1;
        }

        sum += value * base;
        base *= 16;
    }

    cout << "Decimal value = " << sum << endl;
    return 0;
}
