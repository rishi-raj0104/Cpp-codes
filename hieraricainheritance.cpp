#include <iostream>
using namespace std;
class A
{
    public:
    void m1()
    {
        cout<<"\n m1 from class A";
    }
};
class B: public A//B class inherits A as Parent
{
    public:
    void m2()
    {
        cout<<"\n m2 from class B";
    }
    //contains data of A+B
};
class C: public A//C class inherits A as Parent
{
    public:
    void m3()
    {
        cout<<"\n m3 from class C";
    }
    //Contains data of A+C
};
class D:public B//multilevel inheritance from A->B->D 
{
    public:
    void m4()
    {
        cout<<"\n m4 from class D";
    }
    //contains data of class A+B+D
};
class E:public C//multilevel inheritance from A->C->E
{
    public:
    void m5()
    {
        cout<<"\n m5 from class E";
    }
    //contains data of class A+C+E
};
int main()
{
  D d;//contains A+B+D properties 
  d.m1();
  d.m2();
  d.m4();
  E e;//contains A+C+E properties 
  e.m1();
  e.m3();
  e.m5();

}