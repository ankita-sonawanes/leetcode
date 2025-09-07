#include<iostream>

using namespace std;
int powerno(int base,int power){
    if (power==0){
        return 1;
    }else if(power==1){
        return base;
    }else
    return base*powerno(base,power-1);
    

}
int main(){
    int base,power,result;
    cout<<"enter the base :";
    cin>>base;
    cout<<"enter the power:";
    cin>>power;
    result=powerno(base,power);
    cout<<"result is"<<result<<endl;
    return 0;

}