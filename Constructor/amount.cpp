/*Suppose You Have A Piggie Bank With An Initial Amount of $50 And You Have To Add Some More Amount To It. Create A Class 'AddAmount'
With A Data Member Named 'amount' With An Initial value Of $50. Now Make Two Constructors Of This Class As Follows:
1- Without Any Parameter - no Amount Will Be Added To the Piggie Bank.
2-having A Parameter Which Is The Amount That Will Be Added To The Piggie Bank
Create An Object Of The  'AddAmount' Class And Display The Final Amount In The Piggie Bank.*/


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
