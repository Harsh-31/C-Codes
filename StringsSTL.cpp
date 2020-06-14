#include<iostream>
#include<cstring>  // string class is define in this header file
#include<algorithm>  //header file used for sort function
using namespace std;

bool compare(string a, string b)
{
	return a.length()<b.length();
}

int main()
{
	string s1("Hello World");  //first way of initalizing the string
	cout<<s1<<endl;
	  
	string s2="Hello World"; //second way of initalizing the string
	for(int j=0; j<s2.length(); j++)  
	{
		cout<<s2[j]<<"-"<<endl;
	}
	cout<<s2<<endl;
	
	string s3;
	getline(cin,s3);
	cout<<s3<<endl;
	
	string arr[]={ "dusterrrrrrrrrrrrrrr", "maruti", "santroooo"};
	sort(arr,arr+3,compare);   // to sort
	
	for(int i=0; i<3; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	
	return 0;
}
