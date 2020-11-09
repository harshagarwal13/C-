#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<500;i++)
    {
        for(j=1;j<500;j++)
        {
            for(k=1;k<500;k++)
            {
             if((i*i+j*j)==(k*k))
             {
             cout<<"Side 1-"<<i<<endl;
             cout<<"Side 2-"<<j<<endl;
             cout<<"Hypotenuse-"<<k<<endl<<endl;
             break;
             }
            }
        }
    }
    return 0;
}