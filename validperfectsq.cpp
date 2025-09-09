#include<iostream>
using namespace std;
bool isperfectsq(int n){
    int left=1 ,right=n;
    while(left<=right){
        int mid=(left + right)/2;
        if(mid * mid== n){
            return true;
        }else if(mid * mid >n){
            right=mid-1;
        }else
            left=mid+1;
    }
    return false;
}
int main(){
    int n ;
    cout<<"enter the number";
    cin>>n;
    if(isperfectsq(n)){
        cout<<"the number is perfect square";
    }else
    cout<<"the number is not perfect square";
    return 0;
}