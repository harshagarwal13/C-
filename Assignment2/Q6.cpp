#include<iostream>
#include<math.h>
using namespace std;
class Rectangle
{
public:
    Rectangle()
    {
        setfunction();
    }
    void setfunction()
    {
        int  x1,x2,x3,x4,y1,y2,y3,y4;
        cout<<"Enter coordinates x1,x2,x3,x4,y1,y2,y3,y4"<<endl;
	 //1,5,5,1,1,1,5,5
        cin>>x1>>x2>>x3>>x4>>y1>>y2>>y3>>y4;
        if(x1>20&&x1<0||x2>20&&x2<0||x3>20&&x3<0||x4>20&&x4<0||y1>20&&y1<0||y2>20&&y2<0||y3>20&&y3<0||y4>20&&y4<0)
        {
            cout<<"Coordinates are not within the range"<<endl;
        }
        float l1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        float l2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        float l3=sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
        float l4=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
        if(l1==l3 && l2==l4)
        {
            draw(x1,x2,x3,x4,y1,y2,y3,y4);
        }
        else
        {
            cout<<"This is not a rectangle"<<endl;
        }
    }


    char setfillcharacter()
    {
        char f;
        cout<<"Enter filling character";
        cin>>f;
        return f;
    }
    char setperimetercharacter()
    {
        char p;
        cout<<"Enter border character";
        cin>>p;
        return p;
    }
    void draw(int x1,int x2,int x3,int x4,int y1,int y2,int y3,int y4)
    {
	int i,j;
	char a=setfillcharacter();
	char b=setperimetercharacter();
	x1=1;
	x2=5;
	x3=5;
	x4=1;
	y1=1;
	y2=25-y2;
	y3=25-y3;
	y4=5;
	for(i=0;i<25;i++)
	{
		for(j=0;j<25;j++)
		{
			if(i<y2&&i>y3)
			{
				if(j<x2&&j>x1)
				{
				    cout<<a;
				}
				else if(j==x2||j==x1)
				{
				    cout<<b;
				}
				else
                {
                    cout<<" ";
                }
			}
		else if(i==y3||i==y2)
			{
				if(j<=x2&&j>=x1)
				{
					cout<<b;
				}
				else
				{
				    cout<<" ";
				}

			}
			else
			{
			    cout<<" ";
			}

		}
		cout<<endl;
	}

    }
};
int main()
{
    Rectangle r1;
return 0;
}