#include<bits/stdc++.h>
using namespace std;
 
int main()
{
long int n,c=0,count=0;
cin>>n;
long int a[n],b[n];
for(long int k=0;k<n;k++)
{
    cin>>a[k]>>b[k];
}
for(long int i=0;i<n-1;i++)
{
if(a[i]<a[i+1] && b[i]>b[i+1])
{
    count++;
    break;
}
}
if(count!=0)
{
    cout<<"Happy Alex";
}
else
{
for(long int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]<a[j] && b[i]>b[j])
{
    cout<<"Happy Alex";
    return 0;
}
}
}
  cout<<"Poor Alex";
}
return 0;
}