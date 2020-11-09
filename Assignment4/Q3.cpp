#include <iostream>
#include <cmath>
using namespace std;
class Q
{
public:
    int s1,s2,s3,s4;
    int per(int a,int b,int c,int d)
    {
        s1=a;
        s2=b;
        s3=c;
        s4=d;
    return s1+s2+s3+s4;
    }
};
class R:public Q
{

    public:
    int ar()
    {
        return s1*s3;
    }
};
class S:public R
{

};
class T:public Q
{
    public:
    int ar(int h)
    {
         return (s1+s2)*h/2;
    }
};
int main()
{
    int ch;
    int s1,s2,s3,s4,h;
    do
    {
    cout<<"Enter 1 For Rectangle: "<<endl;
    cout<<"Enter 2 for square: "<<endl;
    cout<<"Enter 3 for trapezoid: "<<endl;
    cin>> ch;
    cout<<endl;

    switch(ch)
    {
    case 1:
        cout<<"Enter length and breadth of rectangle: "<< endl;
        cin>>s1>>s2;
        R ob1;
        cout<<"Perimeter of the rectangle is: "<<ob1.per(s1,s2,s1,s2)<< endl;
        cout<<"Area of the rectangle is: "<<ob1.ar()<< endl<<endl;
    break;
    case 2:
        cout<<"Enter side of the square: ";
        cin>>s1;
        S ob2;
        cout<<"Perimeter of the square is: "<<ob1.per(s1,s1,s1,s1)<< endl;
        cout<<"Area of the square is: "<<ob1.ar()<< endl<<endl;
    break;
    case 3:
        cout<<"Enter parallel sides of trapezoid: ";
        cin>>s1>>s2;
        cout<<endl;
        cout<<"Enter other 2 sides of trapezoid: ";
        cin>>s3>>s4;
        cout<<endl;
        cout<<"Enter height: ";
        cin>>h;
        T ob3;
        cout<<"Perimeter of the Trapezoid is: "<<ob3.per(s1,s2,s1,s2)<< endl;
        cout<<"Area of the Trapezoid is: "<<ob3.ar(h)<< endl<<endl;
    }
    cout<<"Enter 1 to continue and 0 to exit: ";
    cin>>ch;
    cout<<endl;
    }
    while(ch==1);

return 0;
}
