#include "Invoce.h"

Invoce::Invoce(string name,string des,int pr,int q): pn{name},pd{des},quantity{},price{pr}
        {
            setpartnumber(name);
            setpartdes(des);
            setquantity(q);
            setprice(pr);
        }
void Invoce::setpartnumber(string n)
    {
        pn=n;
    }
    void  Invoce::setpartdes(string d)
    {
        pd=d;
    }
    void  Invoce::setquantity(int q)
    {
        if(q<0)
        {
            quantity=0;
            cout<<"Quantity reset";
        }
        else
            quantity=q;
    }
    void Invoce:: setprice(int p)
    {
        if(p<0)
        {
            price=0;
            cout<<"Price reset";
        }
        else
            price=p;

    }
    string  Invoce::getpartnumber()
    {
        return pn;
    }
    string  Invoce::getpartdes()
    {
        return pd;
    }
    int  Invoce::getprice()
    {
        return price;
    }
    int  Invoce::getquantity()
    {
        return quantity;
    }
    int  Invoce::getinvoceamount()
    {
        return price*quantity;
    }