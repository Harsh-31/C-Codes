#include<iostream>
using namespace std;

int main()
{
	char ch;
	int x=0,y=0;
	ch=cin.get();
	
	while(ch!='\n')
	{
		if(ch=='N' || ch=='n')
		{
			y++;
		}
		else if(ch=='S' || ch=='s')
		{
			y--;
		}
		else if(ch=='E' || ch=='e')
		{
			x++;
		}
		else
		{
			x--;
		}
		
		ch=cin.get();
	}
	
	cout<<"Final Displacement is "<<x<<" and "<<y<<endl;
	
	return 0;
}
