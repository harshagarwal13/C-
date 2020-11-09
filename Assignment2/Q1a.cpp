#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter number of rows or column"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<endl;
        for(j=0;j<n;j++)
        {
            if(i==0||i==n-1)
            {
                cout<<"*";
            }
            else if(j==0||j==n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
    }
return 0;
}
