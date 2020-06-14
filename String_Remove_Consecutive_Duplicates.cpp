//Remove consecutive duplicate characters from a string

#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicate(char arr[])
{
    int length = strlen(arr);
    if(length == 1 || length == 0)
    {
        return;
    }

    int previous = 0;
    for(int current = 1; current < length; current++)
    {
        if(arr[previous] != arr[current])
        {
            previous++;
            arr[previous] = arr[current];
        }
    }
    arr[previous + 1] = '\0';
    return;
}



int main()
{
    char arr[100];
    cin.getline(arr, 1000);
    removeDuplicate(arr);
    cout << arr;

}