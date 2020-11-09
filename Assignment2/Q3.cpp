#include<iostream>
using namespace std;
class Date
{
    int month;
    int day;
    int year;
public:
    Date(int m,int d,int y)
    {
        if(m>1&&m<12)
        {
            this->month=m;
        }
        else
        {
            this->month=1;
        }
        this->day=d;
        this->year=y;
    }
    void setday(int da)
    {
        this->day=da;
    }
    void setmonth(int mo)
    {
        if(mo>1&&mo<12)
        {
            this->month=mo;
        }
        else
        {
            this->month=1;
        }
    }
    void setyear(int ye)
    {
        this->year=ye;
    }
    int getday()
    {
        return day;
    }
    int getmonth()
    {
        return month;
    }
    int getyear()
    {
        return year;
    }
    void displayDate()
    {
        cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter day , month and year"<<endl;
    cin>>a>>b>>c;
    Date d1(a,b,c);
    d1.displayDate();
    d1.setday(5);
    d1.setmonth(2);
    d1.setyear(2020);
    d1.displayDate();
return 0;
}
