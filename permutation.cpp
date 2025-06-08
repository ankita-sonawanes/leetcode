#include<iostream>
using namespace std;
int fact(int num){
    int fact=1;
    for(int i=num; i>=1; i--){
        fact = fact * i;
    }
        return fact;
    
}
int main(){
    int n,r;
    cout<<"enter the no of people:";
    cin>>n;
    cout<<"enter the no of seat the people occupy:";
    cin>>r;
    int p=fact(n)/fact(n-r);
    cout<<"possible outcome:"<<p <<endl;
    
    return 0;
}