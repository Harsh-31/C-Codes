#include<iostream>
using namespace std;

int main()
{
	int x=20;
	cout<< &x<<endl;
	
	float y=60.5;
	cout<< &y<<endl;
	
	//It doesn't work for character variable.
	
	char ch='A';
	cout<< &ch<<endl;  //It will simply print A rather than the address
	
	//Explicit typecasting from char* to void*
	
	cout<< (void*)&ch<<endl;
	
	return 0;
}
