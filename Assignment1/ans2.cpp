
#include<iostream>
using namespace std;
int main()
{
    int n,temp,i,j;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
     cout<< a[1] <<" "<< a[n-2] <<endl;
    return 0;
}
