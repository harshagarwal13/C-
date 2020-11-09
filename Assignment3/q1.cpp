#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    friend ostream &operator<<(ostream &output,const Complex &obj)
    {
        output<<obj.real<<"+"<<obj.img<<"i";
        return output;
    }
    friend istream &operator>>(istream &input, Complex &obj1)
    {
        input>>obj1.real>>obj1.img;
        return input;
    }
};
int main()
{

    Complex C1(10,5),C2;
    cout<<"Enter values: ";
    cin>>C2;
    cout<<C1<<endl;
    cout<<C2;
return 0;
}










