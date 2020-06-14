#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(char a[])
{
	int i = 0;
	int j = strlen(a) - 1;
	
	while(i < j)
	{
		if(a[i] == a[j])
		{
			i++;
			j--;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int main()
{
	char a[1000];
	cin.getline(a,1000);
	
	if(isPalindrome(a))
	{
		cout << "String is Palindrome" << endl;
	}
	else
	{
		cout << "String not Palindrome" << endl;
	}
	
	return 0;
}
