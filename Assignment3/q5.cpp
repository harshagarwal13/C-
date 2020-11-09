#include<iostream>
using namespace std;
float calculateCharges(float dollar)
{
    if(dollar<=3)
    {
        return 2;
    }
    else if(dollar>=4&&dollar<=19)
    {
        return 2+0.5*(dollar-3);
    }
    else 
    {
        return 10;
    }

}
int main()
{
    float one,two,three;
    float a,b;
    cout<<"Enter hours taken by car1: ";
    cin>>one;
    cout<<"Enter hours taken by car2: ";
    cin>>two;
    cout<<"Enter hours taken by car3: ";
    cin>>three;
    cout<<endl;
    cout<<"\tCar"<<"\tHour"<<"\tCost"<<endl;
    cout<<"\t"<< 1<< "\t"<<  one<< "\t"<<   calculateCharges(one)<<endl;
    cout<< "\t"<<  2<< "\t"<<   two<< "\t"<<   calculateCharges(two)<<endl;
    cout<< "\t"<<  3<< "\t"<<   three<<"\t"<<  calculateCharges(three)<<endl;
    a=one+two+three;
    b=calculateCharges(one)+calculateCharges(two)+calculateCharges(three);
    cout<<"\t"<<"Total"<<"\t"<< a<< "\t"<<     b<<endl;
return 0;
}