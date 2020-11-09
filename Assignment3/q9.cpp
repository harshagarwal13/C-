#include <iostream>
using namespace std;
int main()
{
 int A[1000];
 int i,j;
 for(i=2;i<1000;i++)
 {
     A[i]=1;
 }
 for(i=2;i<1000;i++)
 {
     for(j=i+i;j<1000;j=j+i)
 {
     A[j]=0;

 }
 }
 cout<<"Prime numbers are"<<endl;
 for(i=2;i<1000;i++)
 {
     if(A[i]==1)
    cout<<i<<endl;
 }

return 0;
}