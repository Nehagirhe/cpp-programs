#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Print
{
	public:
	int a;
	char b;
	
	
 Print(int n,char c)
	{
	a=n;
	b=c;	
	}
	
	Print(char c,int n)
	{
		a=n;
		b=c;
		
	}
	void getdata()
	{
		cout<<"\nnumber = "<<a;
		cout<<"\ncharacter = "<<b;
	}
		
		
};
int main(int argc, char** argv) {
	Print p(2,'A');
	p.getdata();
	Print p1('B',10);
	p1.getdata();
	return 0;
}
