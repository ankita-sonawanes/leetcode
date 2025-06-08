#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the x and y:";
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<"the"<<x<< "and"<<y<<"in the first Quadrant"; 
    }else if(x<0 && y>0){
        cout<<"the"<<x<< "and"<<y<<"in the second Quadrant"; 
    }else if(x<0 && y<0){
        cout<<"the"<<x<< "and"<<y<<"in the third Quadrant"; 
    }else if(x>0 && y<0){
        cout<<"the"<<x<< "and"<<y<<"in the fourth Quadrant"; 
    } else if(x==0 && y==0){
        cout<<"the"<<x<< "and"<<y<<"origin"; 
    }else if(x!=0 && y==0){
        cout<<"the"<<x<< "and"<<y<<"x axis"; 
    } else if(x==0 && y!=0){
        cout<<"the"<<x<< "and"<<y<<"y axis"; 
    }
    return 0;

}
