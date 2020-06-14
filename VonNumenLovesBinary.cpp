#include<iostream>
using namespace std;
int main() 
{
	int N;
	cin>>N;

	while(N>0)
	{
	 int n;
	 cin>>n; 
	 int p = 1;
	 int ans=0;

	 while(n>0)
	 {
		 int r = n%10;
		 ans = ans+ p*r;
		 p = p*2;
		 n = n/10;
	 }

	 cout<<ans<<endl;
	 N = N-1;
	}

	 return 0;
}
