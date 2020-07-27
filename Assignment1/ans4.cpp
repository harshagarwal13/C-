
#include<iostream>
using namespace std;
int main()
{
    string c;
    cout<<"Enter the string: ";
    cin>>c;
    int i,a=0,j,k;
    for(i=0;c[i]!='\0';i++);
    int d=i/2;
    for(j=0,k=i-1;j<d&&k>d;j++,k--)
    {
        if(c[j]==c[k])
        {
            a++;
        }

    }
    if(a==d)
    {
        cout<<"\nThis is a palindrome string";
    }
    else{
        cout<<"\nNot a palindrome";
    }
    return 0;

}
