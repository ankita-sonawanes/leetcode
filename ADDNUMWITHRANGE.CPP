#include<iostream>
using namespace std;
int main(){
    int n1,n2,sum=0;
    cout<<"enter n1:";
    cin>>n1;
    cout<<"enter n2:";
    cin>>n2;
    for(int i=n1;i<=n2;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;

}