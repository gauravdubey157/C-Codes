#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n,m,d=INT_MAX;
cin>>n>>m;
int a[m];
for(int i=0;i<m;i++)
{
    cin>>a[i];
}
sort(a,a+m);
for(int i=0;i<=m-n;i++)
{
 if(d>a[i+n-1]-a[i])
 {
    d=(a[i+n-1]-a[i]);
 }
}
cout<<d;
return 0;
}
 