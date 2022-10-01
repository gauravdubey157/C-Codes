#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if((3*i+2)%4!=0)
        {
            cout<<3*i+2<<" ";
        }
        else
        {
            n++;
        }
    }
    return 0;
}