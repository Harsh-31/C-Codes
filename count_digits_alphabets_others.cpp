/* WAP to count digits, alphabets, whitespaces and other characters terminated by $ */

#include<iostream>
using namespace std;

int main()
{
	char ch;
	int digits = 0;
	int alphabets = 0;
	int whitespaces = 0;
	int others = 0;
	
	ch = cin.get();
	
	while(ch!='$')
	{
		if(ch>='0' && ch<='9')
		{
			digits++;
		}
		
		else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
		{
			alphabets++;
		}
		
		else if((ch==' ' )|| (ch=='\n' )|| (ch=='\t'))
		{
			whitespaces++;
		}
		
		else
		{
			others++;
		}
		
		ch = cin.get();
	}
	
	cout<<"Digits: "<<digits<<endl;
	cout<<"Alphabets: "<<alphabets<<endl;
	cout<<"Whitespaces: "<<whitespaces<<endl;
	cout<<"Others: "<<others<<endl;
}
