#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p=0,q=0,r=0,a,b,c,s;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    if(arr[i]==1)
    {
        p++;
    }
    else if(arr[i]==2)
    {
        q++;
    }
    else if(arr[i]==3)
    {
        r++;
    }
    }
    if(p<=q && p<=r)
    {    s=p;
        cout<<p;
    }
    else if(q<=p && q<=r)
    {    s=q;
        cout<<q;
    }
    else if(r<=q && r<=p)
    {    s=r;
        cout<<r;
    } 
    for(int j=0;j<s;j++ )
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            a=i;
            arr[i]=' ';
            
        }
        else if(arr[i]==2)
        {
            b=i;
            arr[i]=' ';
            
        }
        else if(arr[i]==3)
        {
            c=i;
            arr[i]=' ';
            
        }cout<<a<<" "<<b<<" "<<c<<endl;}
        
    }
    return 0;
}  