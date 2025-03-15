#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
        
    }
    cout<<"sum of number:"<<sum;
    
    return 0;
}
