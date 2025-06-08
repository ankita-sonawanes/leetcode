#include<iostream>
using namespace std;
int main(){
    int n1,n2,HCF=1,lcm;
    cout<<"enter the n1:";
    cin>>n1;
    cout<<"enter the n2:";
    cin>>n2;
    for(int i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            HCF=i;
        }
    }
    lcm=(n1*n2)/HCF;
    cout<<"hcf is"<<HCF<<endl;
    cout<<"lcm is"<<lcm<<endl;
    return 0;

}