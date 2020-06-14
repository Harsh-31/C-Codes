#include<iostream>
using namespace std;

int main()
{
	char arr[100][100];
	int n;
	cin>>n;
	
    cin.get();  //ci.get() will cpature the enter   Note: enter is also a whitespace
	
	for(int i=0; i<n; i++)
	{
		cin.getline(arr[i],100);  // cin.getline will not capture the enter and put '\0' at the end of string
		
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
}
