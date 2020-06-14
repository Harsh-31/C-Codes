#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int a[100],n;
	cout<<"Enter the size of an array: ";
	cin>>n;
	
	cout<<endl;
	cout<<"Enter the elements of the array"<<endl;
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	int largest= INT_MIN;
	int smallest= INT_MAX;
	
	/*for(int i=0; i<n; i++)
	{
	
	    if(a[i]>largest)
	    {
		     largest= a[i];
	    }
	    if(a[i]<smallest)
	    {
	    	smallest= a[i];
	    }
    } */
    
    // other way of doing the same question is by using max() and min()
    
    for(int i=0; i<n; i++)
    {
    	largest= max(largest, a[i]);
    	smallest= min(smallest, a[i]);
	}
    
    cout<<"Largest= "<<largest<<endl;
    cout<<"smallest= "<<smallest<<endl;
}
