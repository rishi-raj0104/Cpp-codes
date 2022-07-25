#include<iostream>
using namespace std;

class A{
    int i;
    public:
    A(){
        i=1;
        cout<<"The constructor was called & i= "<<i<<endl;
    };
    ~A(){
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    A a_obj;//constructor called
    cout<<"hello"<<endl;
    int x=1;
    if(x)
    {
        A obj2;//constructor called
    }//destructor called
    cout<<"Checking"<<endl;
    return 0;
}
