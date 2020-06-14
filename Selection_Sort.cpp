#include<iostream>
using namespace std;

void selection_sort(int a[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int min_idx= i;
		for(int j=i; j<=n-1; j++)
		{
			if(a[j]<a[min_idx])
			{
				min_idx= j;
			}
		}
		swap(a[i],a[min_idx]);
	}
}

int main()
{
	int a[100],n,key;
	cout<<"Enter the size of an array: ";
	cin>>n;
	
	cout<<endl;
	cout<<"Enter the elements of the array"<<endl;
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
		
    selection_sort(a,n);
    cout<<"Array after sorting is:"<<endl;
    
    for(int i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
	
    
    return 0;
}
	
