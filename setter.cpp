//collection of related functions
#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth;
    public:
    void setLength(int len){
        length=len;
    }
    void setBreadth(int bre){
        breadth=bre;
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
    cout<<"The Area of rect is: "<<obj.area();
    return 0;
}


