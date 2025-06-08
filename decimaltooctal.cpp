#include<iostream>
using namespace std;
int main(){
    int rem,octal=0,decimal,base=1;
    cout<<"enter the decimal number";
    cin>>decimal;
    while(decimal !=0){
        rem=decimal % 8;
        octal=octal+rem*base;
        decimal=decimal/8;
        base=base*10;
    }
    cout<<"the octal number is:"<<octal<<endl;
    return 0;
}