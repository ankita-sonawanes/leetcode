#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int sum1=0;
    int sum2=0;
    cout<<"enter the num1:";
    cin>>num1;
    cout<<"enter the num2:";
    cin>>num2;
    for(int i=1;i<num1;i++){
        if(num1 % i==0){
            sum1+=i;
        }
    }

    for(int i=1;i<num2;i++){
        if(num2 % i==0){
            sum2+=i;
        }
    }
    // float ratio1 = (float)sum1 / num1;
    // float ratio2 = (float)sum2 / num2;

    
if((double)sum1/num1 == (double)sum2/num2){
    cout<<"it is friendly pair";
}else{
    cout<<"it is not friendly pair";
}
return 0;

}