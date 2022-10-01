#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,t=0;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        int p=0;
        for(int j=0;j<m;j++)
        {
            int c=0;
            for(int k=0;k<n;k++)
            {
            if(arr[i][j]>=arr[k][j])
            {
                c++;
            }
            }
            if(c==n)
            {
                p++;
            }
        }
        if(p>0)
        {
         t++;
        }
    }
    cout<<t;
    return 0;
}   