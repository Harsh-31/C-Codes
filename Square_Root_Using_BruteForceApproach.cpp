#include<iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	int p;
	cin>>p;  // p means precision after decimal places
	
	float ans = 0;
	float inc = 1.0;
	
	for(int times = 0; times <= p; times++)
	{
	    //finalise the correct digit for the current place
	    while(ans * ans <= N)
	    {
		   ans = ans + inc; 
	    }
	    ans = ans - inc;
	    
	    //update the increment for the next place
	    inc = inc/10;
    }
	cout << ans << endl;
}
