#include<iostream>
#include<algorithm>   //sort() is defined in this header file
using namespace std;

bool compare(int a, int b)
{
	cout<<"Comparing "<<a<<" and "<<b<<endl;
	return a>b;
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
	
	sort(arr,arr+n,compare);
	
	cout<<"Array after sorting is: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<",";
	}
	
	return 0;
}
