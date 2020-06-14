#include<iostream>
using namespace std;

bool issorted(int *a, int n)
{
	if(n==1)
	{
		return true;
	}
	
	if(a[0]<a[1] && issorted(a+1,n-1))
	{
		return true;
	}
	return false;
}

int main()
{
    int a[]={10,20,30,90,80};
    int n=5;
	if(issorted(a,n))
	{
		cout<<"Yes sorted";
	}
	else
	{
		cout<<"Not sorted";
	}
}
