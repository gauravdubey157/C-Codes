#include<bits/stdc++.h>
using namespace std;
//cakeminator
int main()
{
    int n,m,r=0,c=0;
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
        int count=0;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!='S')
            {
                count++;
            }
        }
        if(count==m)
        {
            r+=count;
        }
    }
     for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<m;j++)
        {
            if(a[j][i]!='S')
            {
              flag++;
            }
            else
            {
                break;
            }
        }
        if(flag==n)
        {
            c+=flag;
        }
    }
    cout<<r+c+1;
    return 0;
}
