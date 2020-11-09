#include<iostream>
using namespace std;
int main()
{
	//here for the question m=10 and n=7
    int m,n,i,j;
    cout<<"Enter number of rows"<<endl;
    cin>>m;
    cout<<"Enter number of columns"<<endl;
    cin>>n;
    for(i=0;i<m;i++)
    {
        cout<<endl;
        if(i==0||i==m-1)
        {
            for(j=0;j<n;j++)
            {
                if(j==(n/2)||j==(n/2)+1||j==(n/2)-1)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }

            }
        }
        else if(i==1||i==m-2)
        {
            for(j=0;j<n;j++)
            {
                if(j==1||j==n-2)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                if(j==0||j==n-1)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
    }
return 0;
}

