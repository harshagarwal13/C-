#include <iostream>
#include"invoce.h"
using namespace std;

int main()
{
        string n,d;
    int q,p,ch;

    do{
    cout << "Enter part number"<<endl;
    cin>>n;
    cout << "Enter part description"<<endl;
    cin>>d;
    cout << "Enter price"<<endl;
    cin>>p;
    cout << "Enter part quantity"<<endl;
    cin>>q;


    Invoce I1(n,d,q,p);
    cout<<"\t***INVOCE***"<<endl;
    cout<<"Product Number-"<<I1.getpartnumber()<<endl;
    cout<<"Product Description-"<<I1.getpartdes()<<endl;
    cout<<"Product Price-"<<I1.getprice()<<endl;
    cout<<"Quantity-"<<I1.getquantity()<<endl;
    cout<<"Invoce Amount-"<<I1.getinvoceamount()<<endl;
    cout<<"Enter 1 to calculate again 0 to exit";
    cin>>ch;
    }
while(ch==1);


    return 0;
}