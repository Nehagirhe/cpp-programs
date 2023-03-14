#include <iostream>

using namespace std;
class A
{
	public:
    void myfun()
    {
    	cout<<"\nNo Parameter   ";
	}
	void myfun(int a)
	{
		cout<<"\nArea Of Square : "<<a;
	}
	void myfun(int l,float b)
	{
		cout<<"\nArea Of Rectangle : "<<l<<b;
	}
	void myfun(int a,float b,double c)
	{
		cout<<"\nAddition Of Three Numbers : "<<a<<b<<c;
	}

};
int main() 
{
	A a;
	a.myfun(34.6575);
	
	return 0;
}
