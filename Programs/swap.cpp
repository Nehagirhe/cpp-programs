//Swap Numbers (Using Temporary Variable)
#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;
     cout<<"\nEnter The Value Of a = ";
     cin>>a;
     cout<<"\nEnter The Value Of b = ";
     cin>>b;
    cout << "Before swapping." << endl;
    cout << "a ="<<a<< ", b = " <<b<< endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = "<<a<< ", b = " <<b<< endl;

    return 0;
}
