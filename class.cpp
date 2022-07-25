//collection of related functions
#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length,breadth;

    int area(){
        return length*breadth;
    }
};
int main()
{
    Rectangle obj;
    obj.length=10;
    obj.breadth=20;
    cout<<"length "<<obj.length<<endl;
    cout<<"breadth "<<obj.breadth<<endl; 
    cout<<"The Area of rect is: "<<obj.breadth*obj.length<<endl;
    cout<<obj.area();
    return 0;
}


