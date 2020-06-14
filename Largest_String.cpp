//Read N, followed by N strings and print the largest string and its length

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char a[1000];
    char largest[1000];

    int length = 0;
    int largest_length = 0;

    cin.get();

    for(int i = 0; i < n; i++)
    {
        cin.getline(a, 1000);
        length = strlen(a);
        if(length > largest_length)
        {
            largest_length = length;
            strcpy(largest, a);
        }
    }

    cout << largest <<" and " << largest_length << endl;

    return 0;
}