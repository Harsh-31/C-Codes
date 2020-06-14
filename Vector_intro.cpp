#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a>b;
}

int main()
{
	vector<int> v;
	v.reserve(100);            //it will reserve the 100 buckets in vector 
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);    //it will add elelments 
	}
	v.pop_back();             //it will delete the element the element from last
	
	//v.clear();              //it will clear all the elements from the vector
	
	cout<<v.capacity()<<endl; //it will print the maximum size of the vector
	
	sort(v.begin(), v.end(), compare);
	//printing
	cout<<"\n elements are:"<<endl;
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<endl;
	}
	
	cout<<v.max_size()<<endl; //it will tell the max size the vector can take
	
	return 0;
}
