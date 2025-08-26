#include <iostream>
using namespace std;
int replace0to1(int num){
    if(num==0){
        return 5;
    }
    int result=0;
    int place=1;
    while(num>0){
        int digit=num % 10;
        if(digit==0){
            digit=5;
        }
        result+=digit*place;
        place*=10;
        num/=10;
        

    }
    return result;
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    int a=replace0to1(number);
    cout<<"replace number"<<a<<endl;
    return 0;

}