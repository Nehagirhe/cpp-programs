#include <iostream>
using namespace std;
class AddAmount
{
	public:
	int amount=50;
	int a;
	
	
	AddAmount()
	{
		amount=50;
	}
	AddAmount(int amt)
	{
	a=amt;
	amount=amount+a;
	}
	void getdata()
	{
		cout<<"\nAmount :"<<amount;
	}
	
		
};

int main() {
int x;
	AddAmount a;
	a.getdata();
	cout<<"\nEnter An Amount You Want To Add In Piggie Bank : ";
	cin>>x;
	AddAmount b(x);
	b.getdata();
	return 0;
}
