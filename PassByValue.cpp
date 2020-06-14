#include<iostream>
using namespace std;

int increment(int a)
{
	a = a + 1;
	cout<<"Inside Function: "<<a<<endl;
}

int main()
{
	int a;
	cin>>a;
	increment(a);
	cout<<"Inside main: "<<a<<endl;
	
	return 0;
}
