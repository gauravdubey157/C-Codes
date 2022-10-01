#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,c=0,s1=0,s2=0,p=0,q=0;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        int r=0;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
                r++;
            }
        }
        if(r==m)
        {
            p++;
            s1+=r;
        }
    }
     for(int i=0;i<m;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]=='.')
            {
                c++;
            }
        }
        if(c==n)
        {
            q++;
            s2+=c;
        }
    }
    cout<<s1+s2-p*q;
    return 0;
}