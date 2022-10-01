#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],s1=0,s2=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        s1+=a[i];
        s2+=b[i];
        if((a[i]%2==0 && b[i]%2!=0) || (a[i]%2!=0 && b[i]%2==0))
        {
            c++;
        }
    }
    if(s1%2==0 && s2%2==0)
    {
        cout<<"0";
    }
    else if(s1%2!=0 && s2%2!=0 && c>0)
    { 
        cout<<"1";
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}