#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"The greatest is"<< a <<endl;
    }
     if(b>c && b>c)
    {
        cout<<"The greatest is"<< b <<endl;
    }
     if(c>a && c>b)
    {
        cout<<"The greatest is"<< c <<endl;
    }
    return 0;
}
