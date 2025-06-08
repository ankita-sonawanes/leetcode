#include<iostream>
using namespace std;
int automorphic(int num){
    int square= num * num;
    while(num!=0){
        if(num % 10 !=square % 10){
            return 0;
        }
        
        
            num /=10;
            square /=10;
        
        
    }
    return 1;
}
int main(){
    int num;
    cout<<"enter the number:"<<endl;
    cin>>num;
    if(automorphic (num)){
        cout<<"it is automorphic";

    }else{
        cout<<"it is not automorphic";
    }
    return 0;

}