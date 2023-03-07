#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class A
{
	public:
		int a;
		int b;
		void assign()
		{
		
		cout<<"\nENTER VALUE OF A : ";
		cin>>a;
		cout<<"ENTER VALUE OF B : ";
		cin>>b;
	}
	void Addition()
	{
		cout<<"Addition = "<<a+b;
		
	}
};

class B:public A
{
	public:
		void substraction()
		{
			cout<<" SUBSTRACTION "<<a-b;
			
		}
};
class C:public B
{
	public:
		void multiplication()
		{
			cout<<" MULTIPLICATION "<<a*b;
		}
};
class D:public C
{
	public:
		void division()
		{
			cout<<" DIVISION "<<a/b;
		}
 } ;
 
int main(int argc, char** argv) {
D d;
cout<<"\n\n---------ADITION------------";
d.assign();
d.Addition();
cout<<"\n\n---------SUBSTRACION------------";
d.assign();
d.substraction();
cout<<"\n\n---------MULTIPLICATION------------";
d.assign();
d.multiplication();
cout<<"\n\n---------DIVISION------------";
d.assign();
d.division();

	return 0;
}
