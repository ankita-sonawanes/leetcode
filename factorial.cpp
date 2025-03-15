#include<iostream>
using namespace std;
int main(){
    int fact=1,num;
    cout<<"enter the num:";
    cin>>num;
    if(num<0){
        cout<<"not possible";

    }else{
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"fact is"<<fact;
}
return 0;
}