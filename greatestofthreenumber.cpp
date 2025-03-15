#include<iostream>
using namespace std;
int main(){
    int first,sec,third;
    cout<<"enter three no:";
    cin>>first>>sec>>third;
    if((first>sec) && (first>third)){
        cout<<"first no is greater"<<endl;
    }else if((sec>first) && (sec>third)){
        cout<<"sec no is greater"<<endl;
    }else
    cout<<"third no is greater"<<endl;
    return 0;

}