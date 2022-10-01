#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum=0,b=0;
    cin>>n;
    long int a[n];
    for(long int i=0;i<n;i++)
    {
      cin>>a[i];
      sum+=a[i];
    }
    sort(a,a+n,greater<int>());
        for(long int i=0;i<n;i++)
        {
            b+=a[i];
            if(b==sum/2)
            {
                cout<<i+2;
                return 0;
            }
            else if(b>=sum/2)
            {
              cout<<i+1;
              return 0;
            }
        }    
    }