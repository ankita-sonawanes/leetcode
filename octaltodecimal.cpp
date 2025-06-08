#include<iostream>
using namespace std;
int main(){
    int rem,decimal=0,base=1,octal;
    cout<<"enter the octal number:";
    cin>>octal;
    while(octal !=0)
    {
        rem=octal % 10;
        decimal=decimal + rem * base;
        octal=octal/10;
        base=base * 8;
    }
    cout<<"the decimal number is:"<<decimal<<endl;
    return 0;
}

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string octal;
//     cout << "Enter the octal number: ";
//     cin >> octal;

//     // Convert the octal string to decimal using base 8
//     int decimal = stoi(octal, nullptr, 8);

//     cout << "The decimal number is: " << decimal << endl;

//     return 0;
// }

// }