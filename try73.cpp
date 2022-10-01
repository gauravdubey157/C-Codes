#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p=0,q=0,r=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            p=a[i];
            q=i;
        }
        else if(a[i]==0)
        {
            r++;
        }
    }
    cout<<"1"<<" "<<p<<endl;
    cout<<n-1-r<<" ";
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0 && i!=q)
        {
            cout<<a[i]<<" ";
        }    
    }
    cout<<endl;
    cout<<r<<" ";
    for(int i=0;i<r;i++)
    {
        cout<<"0"<<" ";
    }
    return 0;
}
