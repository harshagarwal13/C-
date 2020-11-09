#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    Complex(int r=1,int i=1)
    {
        real=r;
        img=i;
    }
    Complex operator*(Complex const &obj)
    {
        Complex result;
        result.real=(real*obj.real)+(img*obj.img*-1);
        result.img=(real*obj.img)+(img*obj.real);
        return result;

    }
    void print()
    {
        cout<<endl<<"          After Multiplication = "<<real<<"+"<<img<<"i";
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
    Complex C3=C1*C2;
    C3.print();
return 0;

}