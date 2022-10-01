#include<iostream>
using namespace std;
 //laptop
int main()
{
long int n,count=0;
cin>>n;
int p1,p2,q2,q1,p3,q3;
if(n%2==0)
{
    for(long int i=0;i<n/2;i++)
{
    cin>>p1>>q1>>p2>>q2;
    if(p1<p2 && q1>q2)
        {
          count++;
          
        }
} 
}
else
{
  for(long int i=0;i<(n+1)/3;i++)
{
    cin>>p1>>q1>>p2>>q2>>p3>>q3;
    if(p1<p2 && q1>q2 || p1<p3 && q3>q2 )
        {
          count++;
          
        }
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