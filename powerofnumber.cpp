// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     double a,b,result;
//     cout<<"enter the base:";
//     cin>>a;
//     cout<<"enter the exponent";
//     cin>>b;
//     result=pow(a,b);
//     cout<<"ans:"<<result;
//     return 0;
// }
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double base=1.5;
    double expo1=2.5;
    double expo2=-2.5;
    double res1,res2;
    res1=pow(base,expo1);
    res2=pow(base,expo2);
    cout<<base<<"^"<<expo1<<"="<<res1<<endl;
    cout<<base<<"^"<<expo2<<"="<<res2<<endl;
    return 0;
}