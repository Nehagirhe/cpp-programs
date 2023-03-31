//Program For Single Inheritance
#include <iostream>

using namespace std;
class Result1
{
	public:
		string name;
		string lname;
		int roll;
		int paper1;
		int paper2;
		int paper3;
		int tot;
		int per;
		
		void Assign()
		{
			cout<<"ENTER STUDENT NAME : ";
			cin>>name;
		        cout<<"ENTER STUDENT LAST NAME : ";
			cin>>lname;
			cout<<"ENTER STUDENT ROLL NO. : ";
			cin>>roll;
			cout<<"ENTER STUDENT PAPER 1 MARKS : ";
			cin>>paper1;
			cout<<"ENTER STUDENT PAPER 2 MARKS: ";
			cin>>paper2;
			cout<<"ENTER STUDENT PAPER 3 MARKS: ";
			cin>>paper3;	
		}
		
		void Total()
		{
		tot=paper1+paper2+paper3;
		cout<<"\nTOTAL = "<<tot;
		}
		void Percentage()
		{
			per=tot/300*100;
			cout<<"\nPERCENTAGE = "<<per;
		}
		
};
class Result2:public Result1
{
	
 } ;

int main(int argc, char** argv) {
	Result2 r,r1;
	r.Assign();
	r.Total();
	r.Percentage();
	r1.Assign();
	r1.Total();
	r1.Percentage();
	
	return 0;
}
