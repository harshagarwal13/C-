#include<iostream>
using namespace std;
class Rectangle
{
    float length=1,width=1;
public:
    int per()
    {
        return 2*(length+width);
    }
    int area()
    {
        return length*width;
    }
    void setlen(int l)
    {
        if(l>0.0&&l<20.0)
        {
            this->length=l;
        }
        else
            {
                cout<<"Not within range"<<endl;
            }
    }
    void setwid(int w)
    {
        if(w>0.0&&w<20.0)
        {
            this->width=w;
        }
        else
            {
                cout<<"Not within range"<<endl;
            }
    }
    int getlen()
    {
        return length;
    }
     int getwid()
    {
        return width;
    }
};
int main()
{
    float le,wi;
    Rectangle r1;
    cout<<"Enter length and width"<<endl;
    cin>>le>>wi;
    r1.setlen(le);
    r1.setwid(wi);
    cout<<"Perimeter of rectangle: "<<r1.per()<<endl;
    cout<<"Area of rectangle: "<<r1.area()<<endl;
    cout<<"Length: "<<r1.getlen()<<endl;
    cout<<"Width: "<<r1.getwid()<<endl;
}
