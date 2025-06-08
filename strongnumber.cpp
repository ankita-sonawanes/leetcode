#include<iostream>
using namespace std;
int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
bool strongnum(int num){
    int sum=0,rem,temp=num;
    while(temp>0){
        rem=temp % 10;
        sum=sum + fact(rem);
        temp/=10;
    }
    return sum==num;
}
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    if (strongnum(num))
    {
        cout<<"means number is strong"<<endl;
    }else{
        cout<<"means number is not strong"<<endl;
    }
    return 0;
}
    
