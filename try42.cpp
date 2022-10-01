#include<bits/stdc++.h>
using namespace std;
 
int main()
{
long int n,count=0;
cin>>n;
long int a[n],b[n];
for(long int i=0;i<n;i++)
{
    cin>>a[i]>>b[i];
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
    cout<<"Poor Alex";
}
return 0;
}