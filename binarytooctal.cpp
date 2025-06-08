#include<iostream>
using namespace std;
int main(){
    int rem,octal=0,decimal=0,base=1,binary;
    cout<<"enter the binary number:";
    cin>>binary;

    while(binary !=0){
        rem=binary % 10;
        decimal=decimal+rem*base;
        binary=binary/10;
        base=base*2;
    }
    while(decimal !=0){
        rem=decimal % 8;
        octal=octal+rem*base;
        decimal=decimal/8;
        base=base*10;
    }
    cout<<"the octal value is"<<octal;
    return 0;
}