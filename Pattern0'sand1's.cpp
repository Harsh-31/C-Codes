#include<iostream>
using namespace std;

int main()
{
	int i,n;
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		int val = i%2==0?1:0;
		
		for(int count=0; count<i; count++)
		{
			cout<<val;
			val= 1-val;
		}
		cout<<endl;
	}
}
