#include<iostream>
using namespace std;
int F(int n)
{
    if(n<=1){
        return n;
    }
    return F(n-1)+F(n-2);
}
int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    cout<<"nth term is:"<<F(n);
    return 0;
}
