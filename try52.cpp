#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,k=0,p=0;
    cin>>n>>m;
    long int a[n];
    if(n%2==0)
    {
        for(long int i=1;i<=n;i++)
    {
     if(i%2==0)
     {
         a[p+n/2]=i; 
         p++;
     } 
     else
     {
         a[k]=i;
         k++;
     }
    }
    }
    else
    {
     for(long int i=1;i<=n;i++)
    {
     if(i%2==0)
     {
         a[p+(n+1)/2]=i; 
         p++;
     } 
     else
     {
         a[k]=i;
         k++;
     }
    }
    }
            cout<<a[m-1];
    return 0;
}   
