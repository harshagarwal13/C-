#include<iostream>
using namespace std;
int main()
{
    int n,r,i,j;
    cout<<"Enter number of rows for pyramid part:"<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cout<<endl;
        if(i<=n/2)
        {
            for(j=0;j<=n/2-i;j++)
            {
                cout<<" ";
            }
            r=i+i-2;
            for(j=0;j<=r;j++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(j=0;j<=n/2;j++)
            {
                if(j==n/2)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
    }
return 0;
}
