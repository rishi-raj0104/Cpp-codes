#include<iostream>
using namespace std;

class A{
    int i;
    public:
    A();
};
A::A()
    {
        i=1;
        cout<<"The constructor was called & i= "<<i<<endl;
    }
int main()
{
    A a_obj;
    return 0;
}
