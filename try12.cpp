#include<iostream>
using namespace std;

int main()
{
long int n,count=0;
cin>>n;
int a[n],b[n], p1,p2,q2,q1;
for(int i=0;i<n/2;i++)
{
    cin>>p1>>q1>>p2>>q2;
    if(p1<p2 && q1>q2)
        {
          count++;
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