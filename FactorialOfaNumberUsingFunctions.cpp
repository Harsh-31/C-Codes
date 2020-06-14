#include<iostream>
using namespace std;

int factorial(int num)
{
	int ans1 = 1;
	for(int i=1; i<=num; i++)
	{
		ans1 = ans1 * i;
	}
	
	return ans1;
}

int main()
{
	int n,r;
	cout << "Enter the value of n and r: ";
	cin >> n >> r;
	
	int nfac = factorial(n);
	int rfac = factorial(r);
	int nrfac = factorial(n-r);
	
	int ans = (nfac) / (rfac * nrfac);
	cout << ans <<endl;

}
