#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,p=INT_MAX;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==3)
    {
        cout<<a[n-1]-a[0];
        return 0;
    }
    int b=1;
    while(b<n-1)
    {
        int sum=0,r=0,s=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=a[b] && a[i+1]!=a[b])
            {
                if(sum<a[i+1]-a[i])
                sum=a[i+1]-a[i];
            }
            else if((a[i]==a[b]))
            {
                s=a[i+1]-a[i-1];
            } 
            if(sum>s)
            {
                r=sum;
            }
            else
            {
                r=s;
            }
        }
        if(p>r)
        {
            p=r;
        }
        b++;
    }
    cout<<p;
    return 0;
}