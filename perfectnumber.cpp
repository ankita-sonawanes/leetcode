#include<iostream>
using namespace std;
bool perfectnum(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num % i==0){
            sum=sum +i;

        }

    }return num==sum;
}
int main(){
    int num;
    cout<<"enter the num";
    cin>>num;
    if(perfectnum(num)){
        cout<<"perfect number"<<endl;
    }else{
        cout<<"not perfect number"<<endl;
    }
    return 0;

}