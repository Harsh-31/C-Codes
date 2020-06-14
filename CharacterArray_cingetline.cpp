#include<iostream>
using namespace std;

int main()
{
	char a[]= {'a', 'b', 'c', '\0'};
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	
	char b[]="Hello";   // in this null character automatically added at last
	cout<<b<<endl;
	cout<<sizeof(b)<<endl;
	
	/*char c[100];
	cin>>c;
	cout<<c<<endl;*/
	
	char d[100];
	cin.getline(d,100);
	cout<<d<<endl;
	
	char paragraph[100];
	cin.getline(paragraph,100,'.');
	cout<<paragraph<<endl;
	return 0;
}
