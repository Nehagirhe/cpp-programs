//Program Which Accept Temperature In Fahrenheit And Print It In Centigrade 

#include <iostream>
using namespace std;
int main()
{
	float temp;
	int celci;
	cout<<"\nEnter Temperature In Fahrenheit : ";
	cin>>temp;
	celci=(temp-32)*0.5556;
	cout<<"Temperature In Celcius is : "<<celci<<endl;
	return 0;
}
