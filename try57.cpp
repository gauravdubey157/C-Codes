#include<bits/stdc++.h>
using namespace std;

int main()
{
  long int y,k,n;
  cin>>y>>k>>n;
  bool ans=false;
  for(int x=1;x<n;x++)
  {
      if((x+y)%k==0 && x+y<=n && n/k<=100000)
      {
          cout<<x<<" ";
          ans=true;
      }
  }
  if(ans==false)
  {
      cout<<"-1";
  }
  return 0;
}
