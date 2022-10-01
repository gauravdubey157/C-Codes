#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,c=0,s=0;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[0][0]==a[0][1])
            {
               cout<<"NO";
              return 0; 
            }
            if((a[0][0]!=a[i][j]) && (i==j||i+j==n-1))
            {
              cout<<"NO";
              return 0;
            }
            if((a[0][1]!=a[i][j]) && (i!=j&&i+j!=n-1))
            {
               cout<<"NO";
               return 0;
            }
        }
    }
    if(c==0&&s==0)
    {
     cout<<"YES"; 
    }
    return 0;
}

    
