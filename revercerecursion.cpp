#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
// int main(){
//     int n,reverse=0,rem;
//     cout<<"enter the number:";
//     cin>>n;
//     while(n!=0){
//         rem=n%10;
//         reverse=reverse*10+rem;
//         n=n/10;

//     }
//     cout<<"reverse number"<<reverse;
//     return 0;
// }
int reversenumber(int n,int rev=0){
    if(n==0){
        return rev;
    }
    return reversenumber(n/10,rev * 10+(n%10));

    
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int reversed=reversenumber(n);
    cout<<"reverse number:"<<reversed;
    return 0;
}
// int main(){
//     int n,reverse=0,rem;
//     cout<<"enter the number:";
//     cin>>n;
//     while(n!=0){
//         rem=n%10;
//         reverse=reverse*10+rem;
//         n=n/10;

//     }
//     cout<<"reverse number";
//     return 0;
// }