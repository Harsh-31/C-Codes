#include<iostream>
using namespace std;

int main()
{
	int n,p=1,ans=0,remainder;
	cin>>n;
	
	while(n!=0)
	{
		remainder = n%10;
		ans = ans+remainder*p;
		n = n/10;
		p = p*2;
	}
	
	cout<<ans<<endl;
}
