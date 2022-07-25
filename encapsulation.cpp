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
//Encapsulation is defined as wrapping up of data and information under a single unit
int main()
{
    Rectangle encapsulation;
    encapsulation.setLength(10);
    encapsulation.setBreadth(2);
    cout<<"Length is : "<<encapsulation.getLength()<<endl;
    cout<<"Breadth is : "<<encapsulation.getBreadth()<<endl;
    cout<<"The Area of rect is: "<<encapsulation.area();
    return 0;
}


