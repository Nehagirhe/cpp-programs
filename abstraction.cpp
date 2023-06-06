#include <iostream>
using namespace std;
class Bank
{
	
	string acno;
	string name;
	string username;
	string pass;
	double amount;
	int profit;
	int loss;
	
	public:
	
		void csetdata()
		{
			
		string usern,passw;
		cout<<"\nEnter Username : ";
		cin>>username;
		cout<<"Enter PassWord : ";
		cin>>pass;
		if(login(username,pass))
		cout<<"\nEnter Account No. : ";
		cin>>acno;
		cout<<"Enter Name. : ";
		cin>>name;
		cout<<"Enter Amount : ";
		cin>>amount;
	}
	
		void cgetdata()
		{	
		cout<<"\nAccount No. : "<<acno;
		cout<<"\nName : "<<name;
			
		cout<<"\nAmount : "<<amount;
		}
			private:	
		int login(string uname,string upass)
		{
			if(username==uname && pass==upass)
			return 1;
			else
			return 0;
		}
		public:
		void msetdata()
		{
		/*cout<<"\nEnter Account No. : ";
		cin>>acno;
		
		cout<<"Enter Name. : ";
		cin>>name;
		
		cout<<"Enter Amount : ";
		cin>>amount;
		cout<<"Enter User Name : ";
		cin>>username;
		cout<<"Enter Pass Word : ";
		cin>>amount;*/
			
		cout<<"Enter Profit : ";
		cin>>profit;
			
		cout<<"Enter Loss : ";
		cin>>loss;
		}
	
		public:
		void mgetdata()
		{
		cout<<"\nAccount No. : "<<acno;
		cout<<"\nName : "<<name;
		cout<<"\nAmount : "<<amount;
		cout<<"\nUser Name : "<<username;
			
		cout<<"\nPass Word : "<<pass;
		cout<<"\nProfit : "<<profit;
		cout<<"\nLoss : "<<loss;	
		}
};
   int main() 
{
	
	Bank c;
	cout<<"\n***** For Clerk *****"<<endl;

	c.csetdata();
	c.cgetdata();

	Bank m;
	m=c;

    cout<<"\n\n***** For Manager *****"<<endl;
	m.msetdata();
	m.mgetdata();
	
	return 0;
}
