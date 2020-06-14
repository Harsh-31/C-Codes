#include<iostream>
using namespace std;

int main()
{
	int a[10]; //Declaration, In brackets you will pass maximum size you need or max. no. of elements you will need
	//int a[10] = {10,20,30};  Initalization , in first three buckets of array 10,20,30 is filled and remaining buckets will be filled with 0
	
	cout<<"Enter the elements in an array: "<<endl;
	for(int i=0; i<=9; i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n Elements entered by user are: "<<endl;
	for(int i=0; i<=9; i++)
	{
		cout<<a[i]<<endl;
	}
	
	// Square of every element of an array 
	for(int i=0; i<=9; i++)
	{
		a[i] = a[i] * a[i];
	}
	
	cout<<"\n Square of every element of an array: "<<endl;
	for(int i=0; i<=9; i++)
	{
		cout<<a[i]<<endl;
	}
	
	// print elements of an array in reverse order
	cout<<"\n Elements of an array in the reverse order are: "<<endl;
	for(int i=9; i>=0; i--)         // for(int i=0; i<=n-i-1; i++) this condition is also correct
	{
		cout<<a[i]<<endl;
	}
}
