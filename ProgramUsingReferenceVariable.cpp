#include<iostream>
using namespace std;

//Pass by reference using reference variable
void update(int &z)     // here &z is local reference variable
{
	z++;
}

int main()
{
	int x = 10;
	
	int &y = x;    //Reference variable is &y. And it sismply means that both x and y are the names of same bucket.
//	int &z;        // this line will show error because reference variable is not initalized.
	y =  y + 1;
	
	cout<<x<<endl;
	cout<<y<<endl;
	
	update(x);
	update(y);
	
	cout<<"updated x: "<<x<<endl;
	cout<<"updated y: "<<y<<endl;
	
	return 0;
}
