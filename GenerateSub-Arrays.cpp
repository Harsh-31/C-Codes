#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cout<<"How many elements you want to enter in the array: "<<endl;
	cin>>n;
	int a[100];
	
	cout<<"Enter the elements in the array: "<<endl;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	cout<<"Sub-arrays are: "<<endl;
	for(i=0; i<n; i++)
	{
		for(j=i; j<n; j++)
		{
			for(k=i; k<=j; k++)
			{
				cout<<a[k]<<",";
		    }
		    
		    cout<<endl;
		}
	}
	
	return 0;
}
