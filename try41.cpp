#include<bits/stdc++.h>
using namespace std;
 //laptop
int main()
{
long int n,count=0;
cin>>n;
long int a[n],b[n];
for(long int k=0;k<n;k++)
{
    cin>>a[k]>>b[k];
}
for(long int i=0;i<n-1;i++)
{
    for(long int j=i+1;j<n;j++)
    {
if(a[i]<a[j] && b[i]>b[j] && i!=j)
{
    count++;
    break;
}
}
if(count!=0)
{
    break;
}
}
if(count!=0)
{
    cout<<"Happy Alex";
}
else
{
    cout<<"Poor Alex";
}
return 0;
}