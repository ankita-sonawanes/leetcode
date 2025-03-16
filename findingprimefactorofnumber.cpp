// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     i=2;
//     cout<<"enter the number:";
//     cin>>n;
//     while(n>1){
//         if(n % i==0){
//             cout<<i<<" ";
//             n/=i;
//         }else
//         i++;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
void primefact(int n){
    int i=2;
    while(n>1){
        if(n % i == 0){
            cout<<i<<" ";
            n/=i;
        }else
        i++;
    }
    

}
int main(){
    int n,i;
    cout<<"enter the n:"<<endl;
    cin>>n;
    cout<<"prime factor";
    primefact(n);
    cout<<endl;
    return 0;
}