#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,sum=0;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
    sum+=a[i];
    }
    if(sum+10*(n-1)<=d)
    {
     int p=d-sum;
     cout<<p/5;
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}    
    
