#include<iostream>
#include<cmath>
using namespace std;
class Base
{
public:
    int l,b,r;
    int calculateArea(int m,int n)
    {
        l=m;
        b=n;
    }
    int calculateVolume(int q)
    {
        r=q;
    }

};
class TwoDShape:public Base
{
public:
    int calculateArea(int l,int b)
    {
        return l*b;
    }
};
class ThreeDShape:public Base
{
public:
    int calculateVolume(int r)
    {
        return (4/3)*3.14*r*r*r;
    }
};
class Rectangle:public TwoDShape
{
};
class Square:public TwoDShape
{

};
class Sphere:public ThreeDShape
{

};
int main()
{
    int ch;
    int l,b,r;
    do
    {
    cout<<" *Enter 1 For Rectangle: "<<endl;
    cout<<" *Enter 2 for square: "<<endl;
    cout<<" *Enter 3 for Sphere: "<<endl;
    cin>> ch;
    cout<<endl;

    switch(ch)
    {
        case 1:
            cout<<"  Enter length and breadth of rectangle: ";
            cin>>l>>b;
            cout<<endl;
            Rectangle ob1;
            cout<<"  Area of the rectangle is: "<<ob1.calculateArea(l,b)<< endl<<endl;
            break;
        case 2:
            cout<<"  Enter side of the square: ";
            cin>>l;
            Square ob2;
            cout<<"  Area of the square is: "<<ob2.calculateArea(l,l)<< endl<<endl;
            break;
        case 3:
            cout<<"  Enter radius of sphere: ";
            cin>>r;
            cout<<endl;
            Sphere ob3;
            cout<<"  Volume of sphere is: "<<ob3.calculateVolume(r)<< endl<<endl;
        default:
            cout<<"Wrong choice"<<endl;
    }
    cout<<"Enter 1 to continue and 0 to exit: ";
    cin>>ch;
    cout<<endl;
    }
    while(ch==1);

return 0;
}
