#include<iostream>
using namespace std;
int main(){
    string ones []={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens []={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n<20){
        cout<<ones[n]<<endl;
    }else{
            cout<<tens[n/10];
            if(n%10 !=0){
                cout<<" "<<ones[n%10];
            }
                cout<<endl;
        }
            return 0;
        }
    

