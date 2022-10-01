#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int s,n,t1,t2,count=0;
    cin>>s>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i = 0; i<n; i++) 
    {
    for(int j = i+1; j<n; j++)
   {
      if(a[i] > a[j]) 
      {
         t1 = a[i];
         t2= b[i];
         a[i] = a[j];
         b[i]=b[j];
         a[j] = t1;
         b[j]=t2;
      }
   }
    }
   for(int i=0;i<n;i++)
    {
    if(s>a[i])
    {
        s=s+b[i];
        count++;
    }
    }
    if(count==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
   return 0;
}