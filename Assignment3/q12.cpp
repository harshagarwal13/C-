#include <iostream>
#include<string.h>
using namespace std;
int  stringReverse(char str[], int l)
{
    if(l==-1)
        return 0;
    if(str[l+1]=='\0')
    {
    cout<<str[l];
    str[l]='\0';
    return  stringReverse(str,  l - 1);

    }
    return  stringReverse(str,  l +1);

}
int main()
{
    int a;
    char str[20] ;
    cout << "Enter a string"<<endl;
    cin>>str;
    a=stringReverse(str,0);
return 0;
}