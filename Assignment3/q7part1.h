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
    Invoce(string name,string des,int pr,int q);
    void setpartnumber(string n);

    void setpartdes(string d);

    void setquantity(int q);

    void setprice(int p);



    string getpartnumber();


    string getpartdes();

    int getprice();


    int getquantity();

    int getinvoceamount();

};