#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
  int n,count=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }

 p:
  for(int i=0;i<n-2;i++)
  {
    if(a[i]==a[i+1] && a[i+1]!=a[i+2])
    {
        swap(a[i+1], a[i+2]);
    }
  }
  for(int i=0;i<n-1;i++)
  {
  if(a[i]==a[i+1])
  {
      count++; 
      if(count<=n)
      { goto p;}
      else
      {
          cout<<"NO";
          return 0;
      }
  }
  }
      cout<<"YES";
  return 0;
}