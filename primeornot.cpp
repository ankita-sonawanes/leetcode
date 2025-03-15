#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no:";
    cin>>n;
    if(n<=1){
        cout<<"not prime number";
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n % i==0){
            cout<<"not a prime number"<<endl;
            return 0;
        }
        
    }
    cout<<"prime number"<<endl;
    return 0;
}