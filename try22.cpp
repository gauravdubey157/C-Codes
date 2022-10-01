#include<bits/stdc++.h>
using namespace std;

int main()
{
  long int y,k,n,count=0;
  cin>>y>>k>>n;
  for(long int x=1;x<=n-y;x++)
  {
      if((x+y)%k==0 )
      {
        cout<<x<<" ";
        count++;
      }
  }
  if(count==0)
  {
    cout<<"-1";
  }
  return 0;
}
