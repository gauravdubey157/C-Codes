#include<iostream>
using namespace std;

int main()
{
long int n,count=0;
cin>>n;
long int a[2],b[2];
for(int j=0;j<n/2;j++)
{
for(int i=0;i<2;i++)
{
    cin>>a[i];
    cin>>b[i];
}
for(int i=0;i<1;i++)
{
if(a[i]<a[i+1] && b[i]>b[i+1])
{
 count++;
}
}
}
if(count==n/2)
{
    cout<<"Happy Alex";
}
else
{
    cout<<"Poor Alex";
}
return 0;
}

