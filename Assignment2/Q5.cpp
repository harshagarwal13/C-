#include<iostream>
#include<math.h>
using namespace std;
class Rectangle
{
public:
    float area1,perimeter1;
    Rectangle()
    {
        setfunction();
    }
    void setfunction()
    {
        float x1,x2,x3,x4,y1,y2,y3,y4;
        cout<<"Enter coordinates x1,x2,x3,x4,y1,y2,y3,y4"<<endl;
        cin>>x1>>x2>>x3>>x4>>y1>>y2>>y3>>y4;
        if(x1>20&&x1<0||x2>20&&x2<0||x3>20&&x3<0||x4>20&&x4<0||y1>20&&y1<0||y2>20&&y2<0||y3>20&&y3<0||y4>20&&y4<0)
        {
            cout<<"Coordinates are not within the range"<<endl;
            area1=0.0;
            perimeter1=0.0;
        }
        float l1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        float l2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        float l3=sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
        float l4=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
        if(l1==l3 && l2==l4)
        {
            area(l1,l2,l3,l4);
            perimeter(l1,l2,l3,l4);
            if(l1==l2==l3==l4)
            {
                square();
            }
        }
        else
        {
            cout<<"This is not a rectangle"<<endl;
        }
    }
    void area(float a,float b,float c,float d)
    {
        float area1=a*b;
        cout<<"Area of a rectangle is: "<<area1<<endl;
    }
    void perimeter(float a,float b,float c,float d)
    {
        float perimeter1=a+b+c+d;
        cout<<"Perimeter of rectangle is: "<<perimeter1<<endl;
    }
    void square()
    {
        cout<<"It is a square"<<endl;
    }
};
int main()
{
    Rectangle r1;
return 0;
}
