#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p=0,q=0,r=0,m=0,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            p=i;
        }
        else if(a[i]>0) 
        {
            q++;
        }
    }
    cout<<"1"<<" "<<a[p]<<endl;
    cout<<q<<" ";
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            cout<<a[i]<<" ";
            s++;
        }
    }
    cout<<endl;
    if(s==0)
    {
        cout<<n-1
    }
    cout<<n-s-1<<" ";
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0 && i!=p)
        {
           cout<<a[i]<<" ";
        }
    }
    return 0;
}