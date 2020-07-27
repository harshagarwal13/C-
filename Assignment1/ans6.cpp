#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int n,a=0,i;
   cout<<"Enter the number: ";
    cin>>n;
    for(i=2;i<=(sqrt(n));i++)
    {
        if(n==2)
        {
           a=0;
        }
       else if(n%i==0)
        {
            a++;
            break;
        }
    }
    if(a==1)
    {
        cout<<"Not a prime number";
    }
    else if(a==0)
    {
        cout<<"Prime number";
    }
}
