#include<iostream>
using namespace std;
int findmax(int a[],int n){
    if(n==1){
        return a[0];

    }
    return max(a[n-1],findmax(a,n-1));
}
int findmin(int a[],int n){
    if(n==1){
        return a[0];

    }
    return min(a[n-1],findmin(a,n-1));
}

int main(){
    int a[100],n;
    cout<<"enter the array size:";
    cin>>n;
    cout<<"enter the array element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the large element"<<findmax(a,n)<<endl;
    cout<<"enter the smallest element"<<findmin(a,n)<<endl;
    return 0;


}