// Main Property of reference variable is that this variable must be initalized.
#include<iostream>
using namespace std;

int main()
{
	int x = 10;
	
	int &y = x;    //Reference variable is &y. And it sismply means that both x and y are the names of same bucket.
//	int &z;        // this line will show error because reference variable is not initalized.
	y =  y + 1;
	
	cout<<x<<endl;
	cout<<y<<endl;
	
	return 0;
}
