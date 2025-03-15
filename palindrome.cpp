#include<iostream>
using namespace std;
int main(){
    int num,reverse=0,rem;
    cout<<"enter the number:";
    cin>>num;
    int temp=num;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }
    if(reverse==temp){
        cout<<"palindrome number";
    }else{
    cout<<"not palindrom";
    }
    return 0;
}