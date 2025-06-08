#include<iostream>
using namespace std;
int main(){
    int max,num;
    cout<<"enter the number of pepole";
    cin>>num;
    max=num * (num -1)/2;
    cout<<"maximum number of handshake"<<max<<endl;
    
    return 0;
}