#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int c=1;
    while(c<=n)
    {
    for(int j=1;j<=n;j++)
    {
        if(c==a[j])
        {cout<<j<<" ";
        c++;}
    }
    }
    return 0;
}