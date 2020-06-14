#include<iostream>
using namespace std;

int stairsearch(int arr[4][4], int n, int x)
{
	int smallest= arr[0][0], largest= arr[n-1][n-1];
	if(x<smallest || x>largest)
	{
		cout<<"Array index out of bound";
	} 
	
	
	for(int i=0; i<n;)
	{
		for(int j=n-1; j>=0;)
	    {
		   if(arr[i][j]==x)
		   {
			   cout<<"Element found at: "<<i<<" , "<<j<<endl;   
		       break;     
		   }
		
		   else if(arr[i][j]>x)
		   {
			   j--;
		   }
		   else
		   {
			   i++;
	       }
	   }
   }

	cout<<"Element not found";
	
	return 0;
}

int main()
{
	int arr[4][4]= {{10, 20, 30, 40},
	                {15, 25, 35, 45},
	                {27, 29, 37, 48},
	                {32, 33, 39, 50}}; 
					
	stairsearch(arr, 4, 29);
	return 0;
}
