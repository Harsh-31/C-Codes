#include<iostream>
using namespace std;

int x=100;   // global scope

int main()
{
	int x=10;
	cout<<x<<endl;
	
	for(int x=0; x<=5; x++)
	{
		cout<<"Loop scope: "<<x<<endl;
	}
	
	cout<<"Local Scope: "<<x<<endl;  //local scope
	cout<<"Global Scope: "<<::x<<endl;  //to access global variable, use scope resolution operator
	
	return 0;
	
}
