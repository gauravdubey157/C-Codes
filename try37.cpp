#include<bits/stdc++.h>
using namespace std;
//cakeminator
int main()
{
    int n,m,c=0,r=0;
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
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
                r++;
            }
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;j++)
        {
            if(a[i][j]=='.')
            {
              c++;
            }
        }
    }
    cout<<c+r;
    return 0;
}
