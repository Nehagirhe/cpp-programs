#include <iostream>
using namespace std;
class Student 
{
	public:
    int length;
    int breadth;   
    Student()
    {
    length=0;
   	breadth=0;  	
	}
	Student(int l,int b)
	{
	length=l;
	breadth=b;
	}
	
	Student(int ln)
	{
	int b;
	length=ln;
	breadth=ln;
	}	
	void getdata()
	{
		cout<<endl<<endl<<"length= "<<length;
		cout<<endl<<"breadth= "<<breadth;
		cout<<endl<<"Area= "<<length*breadth;
	}
};
int main() {
	Student s(2);
	s.getdata();
	Student s1(5,5);
	s1.getdata();
	Student s3;
	s3.getdata();
	return 0;
}
