#include<iostream>
using namespace std;
int main()
{
    int n1,n2,ans=0;
    cin>>n1>>n2;
    
    for(int i=1; i<=n1+3; i++)
    {
        ans=(3*i+2);
        if(ans%n2!=0)
        {
            cout<<ans<<endl;
        }
    }
    //cout<<ans<<endl;
    /*if(ans%2!=0)
    {
       cout<<ans<<endl; 
    }*/
    return 0;
}
