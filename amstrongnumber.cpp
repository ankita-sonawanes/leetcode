#include<iostream>
using namespace std;
int main(){
int num,rem,sum=0,temp;
cout<<"enter the num:"<<endl;
cin>>num;
temp=num;
while(num>0){
    rem=num%10;
    sum=sum+(rem*rem*rem);
    num=num/10;
}
if(temp==sum){
    cout<<"armstrong number";
}else
cout<<"not armstrong number";

return 0;
}