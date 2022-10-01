#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long int n,v,k,c=0,m=0;
    cin>>n>>v;
    int p[n];
    int j=0;
   while(j<n)
   {
       cin>>k;
       long int i;
       long int a[k];
       for(i=0;i<k;i++)
       {
           cin>>a[i];
       }   
       sort(a,a+k);
           if(v>a[0])
           {
               c++;
               p[m]=j;
               m++;
           }
     j++;      
   }
   cout<<c<<endl;
   for(long int i=0;i<m;i++)
   {
       cout<<p[i]+1<<" ";
   }
   return 0;
}