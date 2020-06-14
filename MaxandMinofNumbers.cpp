#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n;
	cout<<"How many numbers you want to enter ? "<<endl;
	cin>>n;
	
	int min_so_far=INT_MAX;
	int max_so_far=INT_MIN;
	
	cout<<"Enter the numbers: ";
	int no;
	
	//without storing all the numbers, based upon the current number
	
	for(int i=0; i<n; i++)
	{
		cin>>no; 
		
		if(no<min_so_far)
		{
			min_so_far=no;
		}
		
		if(no>max_so_far)
		{
			max_so_far=no;
		}
	}
	
	cout<<"Maximum number is: "<<max_so_far<<endl;
	cout<<"Minimum number is: "<<min_so_far<<endl;
}
