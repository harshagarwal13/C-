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
    bool operator==(Complex const &obj)
    {
        if(real==obj.real&&img==obj.img)
        {
            return 1;
        }
        else
            return 0;

    }
    bool operator!=(Complex const &obj1)
    {
        if(real!=obj1.real||img!=obj1.img)
        {
            return 1;
        }
        else
            return 0;
    }
    void print()
    {
        cout<<real<<"+"<<img<<"i";
    }
};
int main()
{
    int a1,a2,b1,b2;
    cout<<"Enter real part of 1st number: ";
    cin>>a1;
    cout<<"Enter imaginary part of 1st number: ";
    cin>>a2;
    cout<<"Enter real part of 2nd number: ";
    cin>>b1;
    cout<<"Enter imaginary part of 2nd number: ";
    cin>>b2;
    Complex C1(a1,a2);
    Complex C2(b1,b2);
    cout<<" **First complex number: ";
    C1.print();
    cout<<endl;
    cout<<" **Second complex number: ";
    C2.print();
    cout<<endl;
    if(C1==C2)
    {

        cout<<"         THEY ARE SAME";
    }
    else if(C1!=C2)
    {
        cout<<"         THEY ARE NOTSAME";
    }
return 0;
}