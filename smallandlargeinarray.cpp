#include<iostream>
using namespace std;
int main(){
    int a[111],n,i,max,min;
    cout<<"enter the array size:";
    cin>>n;
    cout<<"enter the array element";
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    cout<<"me entered"<<endl;
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    min=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
       
    }
   
   

    
     cout<<"large element:"<<max<<endl;
    cout<<"smallest element:"<<min<<endl;
   

    return 0;
}