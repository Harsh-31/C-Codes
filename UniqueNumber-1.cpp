/* Given a list of numbers where every number repeats twice except one, print that one number */
/* We will solve this by using Bitwise XOR operator which is the optimize solution of this code */
/* By doing so it will not take extra memory */

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int no;
	int ans=0;
	
	for(int i=0; i<n; i++)
	{
		cin>>no;
		ans = ans^no;
	}
	cout<<ans<<endl;
	
	return 0;
}
