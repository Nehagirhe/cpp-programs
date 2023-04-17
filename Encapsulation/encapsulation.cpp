#include <iostream>
using namespace std;
class Employee
{
	int id;
	string name;
	double sal;
	
	
	public:
		void setid(int id1)
		{
		id=id1;	
		}
		
		void setname(string name1)
		{
			name=name1;
		}
		void setsal(double sal1)
		{
			sal=sal1;
		}
   
   int getid()
   {
   	return id;
   }
   
   string getname()
   {
   	return name;
   }
   
   double getsal()
   {
   	return sal;
   }
};
int main()
 {
Employee e1,e2;
e1.setid(101);
e1.setname("neha");
e1.setsal(20000);
  
e2.setid(102);
e2.setname("nikita");
e2.setsal(25000);

cout<<"\n********* First Employee *********";
cout<<"\n ID : "<<e1.getid();
cout<<"\n Name : "<<e1.getname();
cout<<"\n Salary : "<<e1.getsal();


cout<<"\n\n********** Second Employee ********* ";
cout<<"\n ID : "<<e2.getid();
cout<<"\n Name : "<<e2.getname();
cout<<"\n Salary : "<<e2.getsal();
	return 0;
}
