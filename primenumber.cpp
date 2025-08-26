#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    
    for(int i=0;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}