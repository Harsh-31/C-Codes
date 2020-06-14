#include<iostream>
#include<cstring>
#include<algorithm>              //used to sort the string
using namespace std;

bool compare(string a, string b)
	{
		//return a>b;
		return a.length()>b.length();
	}
	
int main()
{
	string s("harsh");
	cout<<s<<endl;
	
	string s1= "Another way";
	cout<<s1<<endl;
	
	cout<<s1.length()<<endl;
	for(int j=0; j<=s1.length(); j++)        //iterating over characters of the string
	{
		cout<<s1[j]<<"-";                    //print characters of the string
	}
	cout<<endl;
	string arr[]={"apple", "pineapple", "mango", "banana"};    //string array
	sort(arr,arr+4,compare);              //to sort the string
	
	for(int i=0; i<4; i++)
	{
		cout<<arr[i]<<endl;
	}
} 
