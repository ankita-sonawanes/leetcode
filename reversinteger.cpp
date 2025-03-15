#include<iostream>
using namespace std;
int main(){
    int num,reverse=0,rem;
    cout<<"enter the number:";
    cin>>num;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }
    cout<<"reverse integer:"<<reverse<<endl;
    return 0;
}