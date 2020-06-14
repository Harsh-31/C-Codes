#include<iostream>
using namespace std;

int main()
{
	int n, a[100],i,j,k;
	
	cout<<"Enter how many elements you want to enter in the array ? "<<endl;
	cin>>n;
	
	int left=-1;
	int right=-1;
	
	int currentsum=0;
	int maximumsum=0;
	int cumsum[100]={0};
	
	
	
	
	cout<<"Enter the elements of the array: "<<endl;
	cin>>a[0];
	cumsum[0]=a[0];
	
	for(i=1; i<n; i++)
	{
		cin>>a[i];
		cumsum[i]=cumsum[i-1] + a[i];
	}
	
	
	for(i=0; i<n; i++)
	{
		for(j=i; j<n; j++)
		{
			
			
				currentsum=0;
				currentsum=cumsum[j]-cumsum[i-1];
			
			
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
