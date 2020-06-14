#include<iostream>
using namespace std;
int main() 
{
	int n;
	int row=1;
	int col=1;

	cin>>n;
	cout<<"1";
	cout<<endl;

	if(n!=1)
	{
		for(row=1; row<n; row++)
		{
			cout<<row;
			for(col=1; col<row; col++)
			{
				cout<<"0";
			}
			cout<<row;
			cout<<endl;
		}
	}
	return 0;
}
