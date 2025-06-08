#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;
    int sum=0;
    for(int i=1;i<num;i++){
        if(num % i==0){
            sum +=i;

        }
    }
    if(sum>num){
        cout<<"it is a abundant number";
    }else{
        cout<<"it is not a abundant number";
    }
    return 0;
}