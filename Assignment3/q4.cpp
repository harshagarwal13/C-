#include <iostream>
#include<math.h>
using namespace std;
inline double  spherevolume(double radius)
    {
    return  (4.0 / 3.0 * 3.14159 * pow(radius, 3));
    }
int main()
{

    double r;
    cout << "Enter radius" << endl;
    cin>>r;
    cout<<"The volume is "<<spherevolume(r);

}