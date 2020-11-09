#include <iostream>
#include<string.h>
using namespace std;
bool isPalindrome(string str,int s, int e)
{

    if (s == e)
    return true;

    if (str[s] != str[e])
    return false;


    if (s <= e )
    return isPalindrome(str, s + 1, e - 1);

}
int main()
{
    int n;
    string str ;
        cout << "Enter a string"<<endl;
      cin>>str;
      n = str.length();
    if (isPalindrome(str,0,n-1))
    cout << "It is a palindrome";
    else
    cout << "It is not a palindrome";

    return 0;
}