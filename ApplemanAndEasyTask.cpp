#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int n,c,p=0;
    cin>>n;
    char s[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>s[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c=0;
            if(i-1>=0)
            {
               if(s[i-1][j]=='o')
               {
                  c++;
               }
            }
            if(i+1<n)
            {
               if(s[i+1][j]=='o')
               {
                  c++; 
               }
            }
            if(j-1>=0)
            {
                if(s[i][j-1]=='o')
               {
                  c++; 
               }
            }
            if(j+1<n)
            {
                if(s[i][j+1]=='o')
               {
                   c++;
               }
            }
            if(c%2==0 || c==0)
            {
                p++;
            }
        }
    }    
    if(p==n*n)  
    {
      cout<<"YES";
    }  
    else
    {
        cout<<"NO";
    }
    return 0;
}