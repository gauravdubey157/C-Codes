#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,min=INT_MAX,p,q;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(min>abs(a[i]-a[i+1]))
         {  min=abs(a[i]-a[i+1]);
           p=i;
           q=i+1;
         }
    }
    if(min<abs(a[n-1]-a[0]))
    {
      cout<<p+1<<" "<<q+1;
    }
    else
    {
        cout<<n<<" "<<"1";
    }
    return 0;
}  