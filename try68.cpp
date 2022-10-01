#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100],s=0,p=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int j=1;
        if(i+1!=j || i!=j)
        {
           if(s<a[i+1]-a[i])
           {
            s=a[i+1]-a[i];
           }
        }
        else if(i+1==j)
        {
            if(s<a[i+2]-a[i])
            {
            s=a[i+2]-a[i];
            }
        }
        else if(i==j)
        {
            i++;
            if(s<a[i+1]-a[i])
            {
            s=a[i+1]-a[i];
            }
        }
        j++;
    }
    cout<<s;
    return 0;
}