#include<iostream>
using namespace std;

void print(int a[])      //here only starting address of the array is passed
{
	cout<<a<<endl;
	cout<<"Int print "<<endl;
	cout<<sizeof(a)<<endl;       //here only startingaddress of the array will be printed as size
}

void print2(int *a)
{
	cout<<a<<endl;
}

void print3(int *a, int n)
{
	cout<<"elements of the array are: ";
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
}

//Both notations a[] and *a are same in case of arrays

int main()
{
	int a[] = {10,20,30,40};
	int n = sizeof(a)/sizeof(int);
	
	cout<<a<<endl;
	cout<<&a<<endl;
	
	cout<<sizeof(a)<<endl;        //here size of complete array will be printed i.e. no. of blocks multiply by no. of elements
	 print(a);
	 print2(a);
	 print3(a,n);
	 
	 return 0;
}
