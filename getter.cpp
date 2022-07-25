//collection of related functions
#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth;
    public:
    //setters
    void setLength(int len){
        length=len;
    }
    //setters
    void setBreadth(int bre){
        breadth=bre;
    }
    //getters
    int getLength(){
        return length;
    }
    //getters
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
};
int main()
{
    Rectangle obj;
    obj.setLength(10);
    obj.setBreadth(2);
    cout<<"Length is : "<<obj.getLength()<<endl;
    cout<<"Breadth is : "<<obj.getBreadth()<<endl;
    cout<<"The Area of rect is: "<<obj.area();
    return 0;
}


