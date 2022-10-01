#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int n,m,k,sum=0,p=0,b=1;
  cin>>n>>m>>k;
  int a[n];
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  if(k>=m)
  {
    cout<<"0";
    return 0;
  }
  else
  {
  sort(a+1,a+n+1, greater<int>());
  for(int i=1;i<=n;i++)
  {
   k = k + (a[i] - 1);     //updated total no. of sockets
		if (k >= m) 
        {
			cout<<i;
			return 0;
		}
  }
    cout<<"-1";
  }
  return 0;
}