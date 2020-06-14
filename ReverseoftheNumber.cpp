#include<iostream>
using namespace std;
int main() 
{
	int a,remainder,reverse;
	cin>>a;

    while(a!=0)
	{
	remainder = a%10;
	reverse = reverse*10 + remainder;
	a = a/10;
	}

	cout<<reverse<<endl;
	return 0;
}
