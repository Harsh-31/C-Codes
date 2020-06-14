#include<iostream>
using namespace std;

int main()
{
	int n,a[100];
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	int cs=0; //cs denotes currentsum
	int ms=0; //ms denotes maximumsum
	
	//Kadane's Algorithm
	for(int i=0; i<n; i++)
	{
		cs=cs+a[i];
		if(cs<0)
		{
			cs=0;
		}
		
		else
		{
			ms=max(cs,ms);
		}
	}
	
	cout<<"Maximum sum of sub-array is: "<<ms<<endl;
	
	return 0;
	
}
