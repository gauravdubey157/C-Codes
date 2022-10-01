#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,e,max=INT_MIN;
    cin>>n>>k;
    int f[n],t[n];
    for(int i=0;i<n;i++)
    {
        cin>>f[i]>>t[i];
    }
    for(int i=0;i<n;i++)
    {
        if(t[i]<=k)
        {
            e=f[i];
        }
        else
        {
           e=f[i]-(t[i]-k);
        }
        if(max<e)
        {
            max=e;
        }
    }
    cout<<max;
    return 0;
}    