#include<iostream>
using namespace std;

int main()
{
	char ch;
	cin>>ch;
	
	switch(ch)
	
	{
		case 'p':
		case 'P': cout<<"pizza"<<endl;
		break;
		
		case 'm':
		case 'M': cout<<"maggi"<<endl;
		break;
		
		case 'c':
		case 'C': cout<<"coke"<<endl;
		break;
		
		default: cout<<"item not available ";	
	}
}
