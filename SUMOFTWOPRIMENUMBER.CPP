#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    
        for(int i=2;i*i<=n;i++){
            if(n % i==0){
            return false;
            }
            
        }
        return true;
    
    
}
void primesum(int num){
    bool found=false;
    for(int i=2;i<=num/2;i++){
        if(isprime(i) && isprime(num-i)){
            cout<<num<<"="<<i<<"+"<<num-i<<endl;
            found=true;
        }
    }
    if(!found){
        cout<<num<<"cannot bi expressed";
    }
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    primesum(number);
    return 0;
}