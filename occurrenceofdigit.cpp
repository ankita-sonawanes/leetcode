#include<iostream>
using namespace std;
int main(){
    int n,d,rem;
    cout<<"enter the numbers";
    cin>>n;
    cout<<"enter the digit to coutn";
    cin>>d;
    int count=0;
    int temp=n;
    while(temp>0){
        rem=temp%10;
        if(rem==d){
            count++;
        }
        temp/=10;
    }
    cout<<count;
    return 0;
}