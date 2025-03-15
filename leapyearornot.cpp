#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the year:";
    cin>>n;
    if((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0))){
        cout<<"this is a leap year"<<endl;
    }else
    cout<<"this is not leap year";
    return 0;
}