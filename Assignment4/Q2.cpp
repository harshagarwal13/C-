#include<iostream>
using namespace std;
class Student
{
public:
    Student()
    {
        cout<<"Name of university- ABC university"<<endl;
    }
};
class UndergraduateStudent:public Student
{
public:
 UndergraduateStudent()
    {
        cout<<"Program - Under graduate program "<<endl;
    }
};
class  GraduateStudent:public Student
{
public:
      GraduateStudent()
    {
        cout<<"Program - Post Graduate "<<endl;
    }
};


class freshman:public UndergraduateStudent
{
public:
     freshman()
    {
        cout<<"Sub div- Fresher";
    }
};
class Junior:public freshman
{
public:
     Junior()
    {
        cout<<" completed"<<endl;
        cout<<"Sub div - Junior";
    }
};
class Senior:public Junior
{
public:
    Senior()
    {
        cout<<" completed"<<endl;
        cout<<"Sub div - Senior"<<endl<<endl;
    }
};
class DoctoralStudent:public GraduateStudent
{
public:
     DoctoralStudent()
    {
        cout<<"Sub div-  Doctoral Student "<<endl<<endl;
    }
};
class MastersStudent:public GraduateStudent
{
public:
     MastersStudent()
    {
        cout<<"Sub div - Master  "<<endl<<endl;
    }
};
int main()
{
	freshman ob;
	cout<<endl<<endl;
	Junior ob2;
	cout<<endl<<endl;
	Senior ob3;
	DoctoralStudent ob5;
	MastersStudent ob4;
return 0;
}