#include<iostream>
using namespace std;
int printArray(int arr[],int m,int n)
{
    if(m<n)
    {
            cout<<  arr[m];
            cout<<",";
            printArray(arr,m+1,n);

    }
return 0;
}
int main()
{
    int i,n,b;
    int a[20];
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Elements in the array are: ";
    printArray(a,0,n);
return 0;
}