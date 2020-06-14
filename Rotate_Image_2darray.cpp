#include<iostream>
#include<algorithm>
using namespace std;

void rotate_image(int arr[100][100], int n)
{
	// reverse of the row 
	
	for(int row=0; row<n; row++)
	{
		int start_col=0;
	    int end_col=n-1;
		while(start_col<end_col)
		{
			swap(arr[row][start_col],arr[row][end_col]);
			start_col++;
		    end_col--;
		}
	}
	
	//transpose
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i<j)
			{
				swap(arr[i][j],arr[j][i]);
			}
		}
	}
}

void rotate_STL(int arr[100][100], int n)
{
	//same thing using STL reverse(start_container,end_container) method
	for(int i=0; i<n; i++)
	{
		reverse(arr[i], arr[i]+n);
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i<j)
			{
				swap(arr[i][j],arr[j][i]);
			}
		}
	}
}
void display(int arr[][100], int n)
{
	cout<<"Array after 90 degree rotation is: "<<endl;
	
		for(int row=0; row<n; row++)
	    {
		    for(int col=0; col<n; col++)
		    {
			    cout<<arr[row][col]<<" ";
		    }
		    cout<<endl;
	    }
}
int main()
{
	int arr[100][100];
	int n;
	cin>>n;
	
	for(int row=0; row<n; row++)
	{
		for(int col=0; col<n; col++)
		{
			cin>>arr[row][col];
		}
	}
	
//	rotate_image(arr,n);
    rotate_STL(arr,n);
	display(arr,n);

	
}
	
	

