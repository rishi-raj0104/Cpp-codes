#include<iostream>
using namespace std;

class Parent{
    public:
    void parent_property()
    {
        cout<<"Car+House" <<endl;
    }
};
class Mother: public Parent{
    public:
    void mother_property()
    {
        cout<<"Bunglow+CAR"<<endl;
    }
};
class Son: public Mother{
    public:
    void child_property()
    {
        cout<<"FLAT"<<endl;
    }
};
int main(){
    Son obj;
    obj.child_property();
    obj.parent_property();
    obj.mother_property();

    return 0;
}