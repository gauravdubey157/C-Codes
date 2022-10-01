#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int s=abs(a[2]-a[1]);
    for(int i=2;i<=n/2;i++)
    {
        if(abs(a[2*i]-a[2*i-1])!=s)
        {
            cout<<"no";
            return 0;
        }
    }
cout<<"yes";
return 0;
}