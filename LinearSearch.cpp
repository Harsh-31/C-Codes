#include<iostream>
using namespace std;

int main()
{
	int size,n,number,i;
	
	cout<<"Enter the size of an arry: "<<endl;
	cin>>size;
	
	int a[size];
	
	cout<<"Enter the no. of elements you want to enter in array: "<<endl;
	cin>>n;
	
	cout<<"Enter elements in an array: "<<endl;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter the element you want to search in an array: "<<endl;
	cin>>number;
	
	//Linear Search Algo
	
	for(i=0; i<n; i++)
	{
		if(number==a[i])
		{
			cout<<"\n The "<<number<<" found at index: "<<i;
			cout<<"\n Position of the " <<number<<" is: "<<i+1;
			break;
		}
	}
	
	if(i==n)
	{
		cout<<"The "<<number<<" not found in the array";
	}
	
	return 0;
}
