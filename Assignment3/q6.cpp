#include <iostream>
#include <string>
using namespace std;
class Invoce
{
private:
    string pn;
    string pd;
    int quantity;
    int price;
    public :
        Invoce(string name,string des,int pr,int q): pn{name},pd{des},quantity{},price{pr}
        {
            setpartnumber(name);
            setpartdes(des);
            setquantity(q);
            setprice(pr);
        }
    void setpartnumber(string n)
    {
        pn=n;
    }
    void setpartdes(string d)
    {
        pd=d;
    }
    void setquantity(int q)
    {
        if(q<0)
        {
            quantity=0;
            cout<<"Quantity reset";
        }
        else
            quantity=q;
    }
    void setprice(int p)
    {
        if(p<0)
        {
            price=0;
            cout<<"Price reset";
        }
        else
            price=p;

    }
    string getpartnumber()
    {
        return pn;
    }
    string getpartdes()
    {
        return pd;
    }
    int getprice()
    {
        return price;
    }
    int getquantity()
    {
        return quantity;
    }
    int getinvoceamount()
    {
        return price*quantity;
    }
};
int main()
{

    Invoce I1("EJ125","Motor",1250,2);
    cout<<"\t***INVOCE***"<<endl;
    cout<<"Product Number-"<<I1.getpartnumber()<<endl;
    cout<<"Product Description-"<<I1.getpartdes()<<endl;
    cout<<"Product Price-"<<I1.getprice()<<endl;
    cout<<"Quantity-"<<I1.getquantity()<<endl;
    cout<<"Invoce Amount-"<<I1.getinvoceamount()<<endl;
    cout<<"\t---Thankyou--- ";




    return 0;
}