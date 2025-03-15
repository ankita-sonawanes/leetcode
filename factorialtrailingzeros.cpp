#include<iostream>
using namespace std;
class solution {
public:
int trailingzeros(int n){
    int a=0;
    int b=0;
    for(int i=1; i<=n; i++){
        int num=i;
        while(num%5==0){
            a++;
            num/=5;
        }
        while(num%2==0){
                b++;
                num/=2;
        }
    }
    return min(a,b);
}

};
int main(){
    solution ankita;
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<"trailingzeroes:"<<ankita.trailingzeros(n)<<endl;
    return 0;
}