#include<iostream>
using namespace std;

int main()
{
	int n,r;
	cout << "Enter the value of n and r";
	cin >> n>> r;
	int nfac = 1;
	
	//for n!
	for(int cnum=1; cnum<=n; cnum++)
	{
		nfac = nfac * cnum;
	}
	
	//for r!
	int rfac = 1;
	for(int cnum=1; cnum<=r; cnum++)
	{
		rfac = rfac * cnum;
	}
	
	//for (n-r)!
	int nrfac = 1;
	for(int cnum=1; cnum<=(n-r); cnum++)
	{
		nrfac = nrfac * cnum;
	}
	
	int ans = (nfac) / (rfac * nrfac);
	cout << ans << endl;
	
	return 0;
}
