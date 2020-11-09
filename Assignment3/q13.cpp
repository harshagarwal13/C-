#include<iostream>
using namespace std;
int recursiveMinimum(int arr[],int m,int n)
{
    if(m==n)
    {
        return arr[0];
    }
    else
    {
    return  min(arr[n-1],recursiveMinimum(arr,m++,n-1));
    }
}
int main()
{
    int i,n,b;
    int a[20];
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b=recursiveMinimum(a,0,n);
    cout<<"The minimum element is "<<b;
return 0;
}