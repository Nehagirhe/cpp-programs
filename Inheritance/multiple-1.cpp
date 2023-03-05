#include <iostream>

using namespace std;
class StudentData
{
	public:
		int roll;
		string name;
		string add;
		
		void AcceptData()
		{
		cout<<"\nENTER STUDENT NAME : ";
		cin>>name;
		cout<<"ENTER STUDENT ROLL NO. : ";
		cin>>roll;
		cout<<"ENTER STUDENT ADDRESS : ";
		cin>>add;
		}
};

class Marks
{
	public:
		int marks1,marks2,marks3;
		void AcceptMarks()
		{
			cout<<"\nENTER PAPER 1 MARKS : ";
			cin>>marks1;
			cout<<"\nENTER PAPER 2 MARKS : ";
			cin>>marks2;
			cout<<"\nENTER PAPER 3 MARKS : ";
			cin>>marks3;
		}
		
};
class Stud:public StudentData,public Marks
{
	public:
	int tot;
	void calculation()
	{
	tot=marks1+marks2+marks3;
	cout<<"TOTAL = "<<tot;
	}
  /*void percentage()
	{
	per=((tot/300)*100);
	cout<<"\nPERCENTAGE = "<<per;	
		}*/
void show()
{
	cout<<"\nNAME     : "<<name;
	cout<<"\nROLL NO. : "<<roll;
	cout<<"\nADDRESS  :"<<add;
	cout<<"\nPAPER 1 MARKS : "<<marks1;
	cout<<"\nPAPER 2 MARKS : "<<marks2;
	cout<<"\nPAPER 3 MARKS : "<<marks3;
}
};
int main(int argc, char** argv) {
	Stud s;
	s.AcceptData();
	s.AcceptMarks();
	s.calculation();
//	s.percentage();
	s.show();
	return 0;
}
