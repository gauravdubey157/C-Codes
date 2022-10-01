#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  long int y,k,n;
  bool ans=false;
  cin>>y>>k>>n;
  for(int x=1;x<=n-y and n/k<=100000 ;x++)
    {
      if((x+y)%k==0) 
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