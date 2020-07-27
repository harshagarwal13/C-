#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number: ";
    int n,sum=0,rem;
    cin>>n;
    int m=n;
    while(n)
    {
        rem=n%10;
        n=n/10;
        sum=sum*10+rem;
    }
    if(sum==m)
    {
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }
    return 0;

}
