#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c,j,k,l;
   string p,q,r;
   cin>>a>>b;
   c=a+b;
   p=to_string(a);
   q=to_string(b);
   r=to_string(c);
   p.erase(remove(p.begin(), p.end(), '0'), p.end());
   q.erase(remove(q.begin(), q.end(), '0'), q.end());
   r.erase(remove(r.begin(), r.end(), '0'), r.end());
   j=stoi(p);
   k=stoi(q);
   l=stoi(r);
   if(j+k==l)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }
return 0;
}
