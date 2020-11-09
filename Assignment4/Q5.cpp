#include<iostream>
using namespace std;
class Base
{
public:
    Base(int value)
    {
        cout<<"Base class with value "<<value<<endl;
    }
    Base1()
    {
        cout<<"Base class "<<endl;
    }
    ~Base()
    {
        cout<<"Base class destructor "<<endl;
    }
};

class Parent1:virtual public Base
{
public:
    Parent1(int value):Base(value)
    {
        cout<<"Parent class-1 with value "<<value<<endl;
    }

    ~Parent1()
    {
        cout<<"Parent class-1 destructor"<<endl;
    }
};
class Parent2:virtual public Base
{
public:
    Parent2(int value):Base(value)
    {
        cout<<"Parent class-2 with value "<<value<<endl;
    }

    ~Parent2()
    {
        cout<<"Parent class-2 destructor"<<endl;
    }
};
class Child:public Parent1,public Parent2
{
public:
    Child(int value):Parent1(value),Parent2(value),Base(value)
    {
        cout<<"Child class with value "<<value<<endl<<endl;
    }

    ~Child()
    {
        cout<<"Child class destructor"<<endl;
    }
};
int main()
{
    Child c2(20);
return 0;
}
