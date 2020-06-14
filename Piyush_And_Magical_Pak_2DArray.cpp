#include<iostream>
using namespace std;

void magical_park(char arr[100][100],int m, int n, int k, int s)
{
	// check for piyush can get out of the park
	bool success= true;
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			    char ch= arr[i][j];
		
				if(s<k)
				{
					success= false;
					break;
				}
				if(ch=='*')
				{
					s+=5;
				}
				else if(ch=='.')
				{
					s-=2;
				}
				else
				{
					break;
				}
				
				// we also loose one point when we move right except the last column
				if(j!=n-1)
				{
					s--;
				}
			
		}
	}
	if(success)
	{
		cout<<"Yes"<<endl;
		cout<<s<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}

int main()
{
	char arr[100][100];
	int m,n,k,s;         //k is threshhold strength and s is the strength
	cin>>m>>n>>k>>s;
	
	for(int row=0; row<m; row++)
	{
		for(int col=0; col<n; col++)
		{
			cin>>arr[row][col];
		}
	}
	
	magical_park(arr,m,n,k,s);
	return 0;
}
