#include<iostream>
using namespace std;
int main(){
    int sum=0,num;
    cout<<"enter the no:";
    cin>>num;
    while(num!=0){
        sum+=num%10;
        num=num/10;

    }
    cout<<sum<<endl;
    return 0;
   
}
