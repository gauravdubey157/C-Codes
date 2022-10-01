#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,p[100],a[100],f=INT_MAX;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }    
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=0;j<c[i];j++)
        {
        cin>>p[j];
        t=t+5*p[j]+15;
        }
        a[i]=t;
    }
     for(int i=0;i<n;i++)
    {
     if(f>a[i])
     {
         f=a[i];
     }
    }  
    cout<<f;
    return 0;
}