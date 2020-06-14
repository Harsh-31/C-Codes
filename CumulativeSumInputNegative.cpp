#include<iostream>
using namespace std;

int main() 
{
    
	int sum=0;
	int no;

	
	while(sum>=0)
	{
		cin>>no;
		sum =sum+no;
		if(sum<0)
		{
			break;
		}
		cout<<no<<endl;
	}
	return 0;
}
