#include<iostream>
using namespace std;
class Shape
{
public:
    Shape()
    {
        cout<<" My Base is class Shape "<<endl;

    }
    void draw()
    {
        cout<<" Draw shapes "<<endl;
    }
     void TwoDShape()
    {
        cout<<" I am a 2-D shape "<<endl<<endl;
    }
};
class Triangle:virtual public Shape
{
public:
    Triangle()
    {
        cout<<" I am Derived class -Triangle "<<endl;
    }
};
class Square:virtual public Shape
{
public:
    Square()
    {
        cout<<" I am Derived class -Square "<<endl;
    }
};
int main()
{   cout<<"**** Derived class-Triangle ****"<<endl;
    Triangle t;
    t.draw();
    t.TwoDShape();

    cout<<"**** Derived class-Square ****"<<endl;
    Square sq;
    sq.draw();
    sq.TwoDShape();
return 0;

}