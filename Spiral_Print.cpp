#include<iostream>
using namespace std;

void spiral_print(int arr[100][100], int m, int n)
{
	int startrow=0; 
	int startcol=0;
	int endrow=m-1;
	int endcol=n-1;
	
	while(startrow<=endrow && startcol<=endcol)
	{
		//first row
		for(int i=startcol; i<=endcol; i++)
		{
			cout<<arr[startrow][i];
		}
		startrow++;
		
		//end column
		for(int i=startrow; i<=endrow; i++)
		{
			cout<<arr[i][endcol];
		}
		endcol--;
		
		//bottom row
		if(endrow>startrow)
		{
		   for(int i=endcol; i>=startcol; i--)
		   {
			  cout<<arr[endrow][i];
		   }
		   endrow--;
	    
		}
		//first column
		if(endcol>startcol)
		{
		
		   for(int i=endrow; i>=startrow; i--)
		   {
			  cout<<arr[i][startcol];
		   }
		   startcol++;
	    }
	}
}

int main()
{
	int arr[100][100];
	int m,n;
	cin>>m>>n;
	
	for(int row=0; row<m; row++)
	{
		for(int col=0; col<n; col++)
		{
			cin>>arr[row][col];
		}
	}
	
	spiral_print(arr,m,n);
	
}
