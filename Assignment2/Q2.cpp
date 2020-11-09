#include<iostream>
using namespace std;
class Account
{
    int accbalance;
public:
    Account(int balance)
    {
        if(balance>=0)
        {
            this->accbalance=balance;
        }
        else
        {
            this->accbalance=0;
        }
    }
        int getbalance()
        {
            return accbalance;
        }
        void credit(int c1)
        {
            accbalance+=c1;
        }
        void debit(int d1)
        {
            if(accbalance>d1)
            {
                accbalance-=d1;
            }
            else
            {
                cout<<"Debit amount exceeded account balance"<<endl;
            }
        }
};
int main()
{
    Account a1(1000);
    Account a2(-20);
    cout<<"Initial Balance of account 1 is "<<a1.getbalance()<<endl;
    cout<<"Initial Balance of account 2 is "<<a2.getbalance()<<endl;
    a1.credit(100);
    a2.credit(10);
    cout<<"After credit, the balance of account 1 is "<<a1.getbalance()<<endl;
    cout<<"After credit, the balance of account 2 is "<<a2.getbalance()<<endl;
    a1.debit(500);
    a2.debit(5);
    cout<<"After debit, the balance of account 1 is "<<a1.getbalance()<<endl;
    cout<<"After debit, the balance of account 2 is "<<a2.getbalance()<<endl;
return 0;
}
