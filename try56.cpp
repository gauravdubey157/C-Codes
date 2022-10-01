#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
  int n,c=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
 p:
  for(int i=0;i<n-1;i++)
  {
    if(a[i]==a[i+1])
    {
       swap(a[i],a[i+1]);
    }
  }
  for(int i=0;i<n-1;i++)
  {
  if(a[i]==a[i+1])
  {
       goto p;
  }
  }
      cout<<"YES";
  return 0;
}