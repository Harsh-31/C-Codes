#include<iostream>
using namespace std;

int main()
{
	int b[] =  {1,2,3};
	cout << b << endl;
	
	char a[] = {'a','b', 'c', 'd', 'e', '\0'};
	cout << a;
	
	char s1[] = {'g', 'h', 'i', 'j', ;'k', '\0'};
	char s2[] = "harsh";
	
	cout << s1 << " " << sizeof(s1) << endl;
	cout << s2 << " " << sizeof(s2) <<endl;
	
	return 0;
}
