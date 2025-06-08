#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw()=0;
};
class circle:public shape{
    public:
    void draw() override{
        cout<<"draw circle";

    }

};
class triangle:public shape{
    public:
    void draw()override{
        cout<<"draw tringle";
    }
};
int main(){
    shape * sptr;
    
    circle c;
    triangle t;

    sptr=&c;
    sptr->draw();

    sptr=&t;
    sptr->draw();
    return 0;
}