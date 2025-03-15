#include<iostream>
using namespace std;
bool isprime(int n){
    int count=0;
    if(n<2){
        
        return false;
    }
    for(int i=2; i<n;i++){
        if(n % i==0){
            
            return false;
        }
        
    }
    
    return true;
}
int main(){
    int lower,upper;
    cout<<"enter two number:";
    cin>>lower>>upper;
    cout<<"prime number are";
    for(int i=lower;i<=upper;i++){
        if(isprime(i)){
            cout<< i << " ";
        }
    }
    cout<<endl;
    return 0;
}