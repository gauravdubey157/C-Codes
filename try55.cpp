#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,sum=0,c=1;
    cin>>n;
    long int a[n];
    for(long int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    long int j=1;
    while(a[0]!=a[j])
    {
    sort(a,a+n, greater<long int>());
    for(long int i=0;i<n-1;i++)
    {
        if(a[i]-a[i+1]>=1 && a[i]>1)
        a[i]=a[i]-a[i+1];
    }
    j++;
    }
    sort(a,a+n);
    cout<<n*a[0];
    return 0;
}

