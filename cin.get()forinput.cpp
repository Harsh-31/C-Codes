#include<iostream>
using namespace std;


//int main()
/* {   // Example 1 by using inuilt function cin.getline()
	char ch;
	//cin>>ch;  
	
	ch=cin.get(); // reads the first char //this method reads any single char including spaces/newlines
	
	while(ch!='.')
	{
		//prints the last character that we have read
		cout<<ch;
		//update char in memeory (read the next character)
		//reads the rest of the characters
		ch=cin.get();
	}
	
	return 0;
}  */


//Example-2

// Read a sentence/paragraph and store it 
// cin.get() reads a single character
// put a loop to read characters till you get a new line '\n'

void readline(char a[], int maxlen)
{
	int i=0;
	char ch = cin.get();
	while (ch != '\n')
	{
		a[i] = ch;
		i++;
		if(i == (maxlen - 1))
		{
			break;
		}
		ch = cin.get();
	}
	// once out of the loop
	a[i] = '\0';
	return;
}

int main()
{
	char a[1000];
	readline(a,1000);
	cout << a <<endl;
	return 0;
}
