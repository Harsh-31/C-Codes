#include<iostream>
using namespace std;

int factorial(int n)
{
	int ans = 1;
	for(int i=1; i<=n; i++)
	{
		ans = ans * i;
	}
	
	return ans;
	
}

int NCR(int n, int r)
{
	int ans = factorial(n) / (factorial(r) * factorial(n-r));
	
	return ans;
}

int main()
{
	int no;
	int a , b;
	cout << "Enter the no. of which you want to find factorial: ";
	cin >> no;
	cout << endl; 
	cout << "Enter the value of a and b: ";
	cin >> a >> b;
	cout << endl;
	cout << factorial(no) << endl;
	cout << NCR(a,b) << endl;
	
	return 0;
}
