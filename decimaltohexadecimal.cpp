#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int decimal,i=0,rem;
    char hexa[20];
    cout<<"enter a decimal number";
    cin>>decimal;
    int num=decimal;
    while(num !=0){
        rem = num % 16;
        if (rem<10){
            hexa[i]=rem + '0';
        }else
        hexa[i]=rem-10+'A';
        i++;
        num=num/16;
    }
    cout<<"hexadecimal value:";
    for(int j=i-1;j>=0;j--)
    {
        cout<<hexa[j];
    }
    cout<<endl;
    return 0;


}