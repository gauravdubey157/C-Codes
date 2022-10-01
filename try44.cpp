#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,sum=0;
   cin>>n;
   int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  p:
    sort(a, a + n, greater<int>());
    for(int i=0;i<n-1;i++)
    {
      if(a[i]!=a[i+1] or a[i]>=1 and a[i+1]>=1)
      {
        a[i]=a[i]-a[i+1];
      }
    }
    for(int i=0;i<n-1;i++)
    {
    if(a[i]!=a[i+1] or a[i]>=1 and a[i+1]>=1)
    {
     goto p;
    }
    }
    for(int i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
    cout<<sum;
return 0;
}
