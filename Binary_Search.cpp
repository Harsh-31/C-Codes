#include<iostream>
using namespace std;

int binary_search(int a[], int n, int key)
{
	int start= 0;
	int end= n-1;
	
	while(start<=end)
	{
		int mid= (start+end)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		else if(a[mid]>key)
		{
			end= mid-1;
		}
		else
		{
			start= mid+1;
		}
	}
	return -1;
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
	
	cout<<"Enter the element you want to search: ";
	cin>>key;
	
    cout<<binary_search(a,n,key);
    
    return 0;
}
	

