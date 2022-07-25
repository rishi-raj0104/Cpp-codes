#include<iostream>
using namespace std;

class Parent{
    public:
    void parent_property()
    {
        cout<<"Car+House" <<endl;
    }
};
class Son: public Parent{
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

    return 0;
}