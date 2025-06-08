#include<iostream>
using namespace std;
int sumofdigit(int num){
    int sum=0;
    while(num !=0){
        sum=sum+num%10;
        num=num/10;
    }
    return sum;
}
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    if(num % sumofdigit(num)==0){
        cout<<"it is harshadnumber";
    }else{
        cout<<"it is not harshadnumber";
    }
    return 0;
}