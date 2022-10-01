#include<bits/stdc++.h>
using namespace std;

//ques samajh nhi aaya bs example dekh ke krdiya XD
 
int main()
{
    int n, k, l, c, d, p, nl, np,smallest=INT_MAX;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  if ((k*l)/nl < smallest)
    smallest=(k*l)/nl;
  if (c*d < smallest)
    smallest=c*d;
  if(p/(np) < smallest)
    smallest=p/(np);

  cout<<smallest/n;
return 0;
}