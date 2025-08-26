#include<iostream>
using namespace std;

void days(int month, int year) {
    if(month == 2) {
        if((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
            cout << "Number of days is 29";
        } else {
            cout << "Number of days is 28";
        }
    }
    else if(month == 1 || month == 3 || month == 5 || month == 7 ||
            month == 8 || month == 10 || month == 12) {
        cout << "Number of days is 31";
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "Number of days is 30";
    }
    else {
        cout << "Invalid month!";
    }
}

int main() {
    int month, year;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    days(month, year);   
    return 0;
}
