#include <iostream>

using namespace std;
class Arithmetics
{
	int x,y,c,d;
	public:

		void SetAdd(int a,int b)
		{
		x=a;
		y=b;
		}
		int GetAdd()
		{
		return x+y;
		} 
		void SetSub(int a,int b)
		{
		x=a;
		y=b;
		}
		int GetSub()
		{
        return x-y;
		}
		void SetMul(int a,int b)
		{
		x=a;
		y=b;
		}
		int GetMul()
		{
		return x*y;
		}
		void SetDiv(int a,int b)
		{
	    x=a;
		y=b;
		}
		int GetDiv()
		{
	    return x/y; 
		}
		void SetMod(int a,int b)
		{
		x=a;
		y=b;
		}
		int GetMod()
		{
			return x%y;
		}
};

    int main( )
{
	Arithmetics a;
	a.SetAdd(5,4);
    cout<<"\nAdd : "<<a.GetAdd();
    a.SetSub(50,25);
	cout<<"\nSub : "<<a.GetSub();
	a.SetMod(30,4);
	cout<<"\nMod : "<<a.GetMod();
	a.SetDiv(50,5);
	cout<<"\nDivision : "<<a.GetDiv();
	return 0;
  }
