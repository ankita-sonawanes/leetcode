#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c,i=3;
    cout<<"enter the number:";
    cin>>n;
    cout<<a<<"\t"<<b<<"\t";
    
    while(i<=n){
        c=a+b;
        cout<<c<<"\t";
        a=b;
        b=c;
        i++;
    }
    return 0;
}