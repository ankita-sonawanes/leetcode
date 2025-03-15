#include<iostream>
using namespace std;
bool armstrong(int num){
int rem,sum=0;
int temp=num;
while(num>0){
    rem=num%10;
    sum=sum+(rem*rem*rem);
    num/=10;
}
return(temp==sum);

}
 
int main(){
    int low,high;
    cout<<"enter the low value:"<<endl;
    cin>>low;
    cout<<"enter the high value:"<<endl;
    cin>>high;
    cout << "Armstrong numbers between " << low << " and " << high << " are: ";

    
    for(int i=low;i<=high;i++){
        if(armstrong(i)){
        cout<<i<<" ";
        }
    }
    return 0;


}

