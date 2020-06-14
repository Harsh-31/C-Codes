#include<iostream>
using namespace std;

int main()
{
	int n, a[100],i,j,k;
	int left=-1;
	int right=-1;
	int currentsum=0;
	int maximumsum=0;
	cout<<"Enter how many elements you want to enter in the array ? "<<endl;
	cin>>n;
	
	cout<<"Enter the elements of the array: "<<endl;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	
	for(i=0; i<n; i++)
	{
		for(j=i; j<n; j++)
		{
			for(k=i; k<=j; k++)
			{
				currentsum+=a[k];
			}
			
			//update maximumsum
			if(currentsum>maximumsum)
			{
				maximumsum=currentsum;
				left=i;
			    right=j;
			}
		}
	}
	// print the maximum sum
	
	cout<<"Maximum sum out of all sub-arrays is: "<<maximumsum<<endl;
	
	//print that particular max sub-array
	
	for(k=left; k<=right; k++)
	{
		cout<<a[k]<<",";
	}
	
	return 0;
}
