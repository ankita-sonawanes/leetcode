#include<iostream>
using namespace std;
int main(){
    int rem,octal,decimal=0,binary=0,base=1;
    cout<<"enter the octal number";
    cin>>octal;
    while(octal>0){
        rem=octal % 10;
        decimal=decimal+rem*base;
        base=base*8;
        octal/=10;
    }
    base=1;
    while(decimal>0){
        rem=decimal % 2;
        binary=binary+rem*base;
        base=base*10;
        decimal/=2;
    }
    cout<<"the binary number is:"<<binary;
    return 0;
}