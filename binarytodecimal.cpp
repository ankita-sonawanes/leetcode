 #include<iostream>
using namespace std;
int main(){
    int rem,decimal=0,base=1,binary;
    cout<<"enter the binary number:";
    cin>>binary;
    while(binary !=0)
    {
        rem=binary % 10;
        decimal=decimal + rem * base;
        binary=binary/10;
        base=base * 2;
    }
    cout<<"the decimal number is:"<<decimal<<endl;
    return 0;
}


// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string binary;
//     cout << "Enter the binary number: ";
//     cin >> binary;

//     int decimal = stoi(binary, nullptr, 2); // base 2 conversion
//     cout << "The decimal number is: " << decimal << endl;

//     return 0;
// }
