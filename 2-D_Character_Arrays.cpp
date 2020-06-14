#include<iostream>
using  namespace std;

int main()
{
	char a[][10]={{'a', 'b', '\0'}, {'c','d','e', '\0'}};
	char  b[][4]= {"abc", "def"};
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<"\n"<<endl;
	cout<<b[0]<<endl;
	cout<<b[1]<<endl;
}
