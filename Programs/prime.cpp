#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i,n,temp;
	cout<<"enter any number:";
	cin>>n;
	for(i=2;i<=(n/2);i++)
	{
	if(n%i==0)
	{
	temp=1;
	break;
}}
if(temp==1)
	cout<<endl<<"it is not a prime number";
	else
	cout<<endl<<"it is a prime number";
	
	
	return 0;
} 
