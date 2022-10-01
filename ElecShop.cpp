/*
1st method without func

#include<iostream>
using namespace std;

int main()
{
 int n,m,bud, temp=0, buy=0;
 cin>>bud>>n>>m;
 int k[n], d[m];
 for(int i=0;i<n;i++)
 {
    cin>>k[i];
 }
  for(int i=0;i<m;i++)
 {
    cin>>d[i];
 }
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<m;j++)
    {
        if (k[i]+d[j]<=bud)
        {
            temp=k[i]+d[j];
        }
        if(temp>buy)
        {buy=temp;}
    }    
 }
  if(temp==0)
  {cout<<"-1";}
  else 
  {cout<<buy;}
  return 0;
}

*/


/*
2nd method with func

#include<iostream>
using namespace std;

int getMoneySpent(int k[],int d[],int bud, int m, int n)
{
    int temp=0, buy=0;
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<m;j++)
    {
        if (k[i]+d[j]<=bud)
        {
        temp=k[i]+d[j];
        if(temp>buy)
        {buy=temp;}
        }
    }    
}
if(temp==0)
return -1;
else 
return buy;
}

int main()
{
 int n,m,bud;
 cin>>bud>>n>>m;
 int k[n], d[m];
 for(int i=0;i<n;i++)
 {
    cin>>k[i];
 }
  for(int j=0;j<m;j++)
 {
    cin>>d[j];
 }
  cout<<getMoneySpent(k, d, bud, m, n);
  return 0;
}
*/