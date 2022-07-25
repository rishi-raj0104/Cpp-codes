#include<iostream>
using namespace std;

class Rectangle{

    private:
    int length,breadth;

    public:
    void setlen(int len)
    {
        length=len;
    }
    void setbre(int bre)
    {
        breadth=bre;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    Rectangle rec;
    rec.setlen(10);
    rec.setbre(20);
    cout<<"Length is : "<<rec.getLength()<<endl;
    cout<<"Breadth is : "<<rec.getBreadth()<<endl;
    cout<<rec.area()<<endl;
}