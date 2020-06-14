#include<iostream>
using namespace std;

int main()
{
	int x = 10;
	int *xptr;
	xptr = &x;
	
	cout<<&x<<endl;
	cout<<xptr<<endl;
	
	cout<<*(&x)<<endl;
	cout<<*(xptr)<<endl;
	
	cout<<*(&xptr)<<endl;
	cout<<&(*xptr)<<endl;
	
	cout<<*(xptr)+1<<endl;
	cout<<*(xptr+1)<<endl;
	
	cout<<&xptr<<endl;
	
	// Double pointer or pointer to pointer
	
	int **xxptr = &xptr;
	cout<<xxptr<<endl; 
	
    char ch = 'A';
	char *chptr = &ch;
	//cout << chptr << endl;     // It will not show the address so to get the address it is better to typecast it because we can't take integer pointer for a character variable.Cout treats caharcter address differently,instead of printing address it prints the content in the memory until it finds the null charachter.
    cout << (int*)chptr<<endl;   
    
    int a[]={1,2,3,4,5};
	cout<<a<<endl;            // these 
    cout<<&a[0]<<endl;        // three statements
    cout<<&a<<endl;           // will show same output 
	
	return 0;
}
