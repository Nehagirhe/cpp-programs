#include <iostream>

using namespace std;
class A
{
	public:
		int l,b;
		void AcceptValue()
		{
			cout<<"\n\nEnter Length : ";
			cin>>l;
			cout<<"Enter Breadth : ";
			cin>>b;
		}
		
};
class B:public A
{
	public:
		void AreaRect()
		{
			cout<<"Area = "<<l*b;
			
		}
};

class C : public A
{
	public:
		void Perimeter()
		{
			cout<<"Perimeter Of Rectangle : "<<2*(l+b)<<endl<<endl;
			
		}
};

int main()
 {
 B b;
 C c;
 cout<<"\n\n**********  FOR AREA OF RECTANGLE   *************";
 b.AcceptValue();
 b.AreaRect();
 cout<<"\n\n\n*********   FOR PERIMETER OF RECTANGLE   ********";

 c.AcceptValue();
 c.Perimeter();	

return 0;
}
