#include<iostream>
using namespace std;

int main()
{  int c=0, s=0;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
     {
         for(int j=i;j<n;j++)
         {
         s=s+a[i];
         }
     }
     //c++;
     cout<<s;
     return 0;
}