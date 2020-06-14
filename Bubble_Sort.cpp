#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
	// Move N-1 large elements to the end
	for(int itr=1; itr<=n; itr++)
	{
		//pairwise swapping in the unsorted array
		for(int j=0; j<=(n-1-itr); j++)
		{
			if(arr[j]>arr[j+1])
			{
			swap(arr[j],arr[j+1]);
		    }
		}
	}
}

int main()
{
	int n, arr[100];
	cout<<"Enter the number of elements you want to enter in array: "<<endl;
	cin>>n;
	
	cout<<"Enter the elements in array: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	bubble_sort(arr,n);
	
	cout<<"Array after sorting is: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<",";
	}
	
	return 0;
}
