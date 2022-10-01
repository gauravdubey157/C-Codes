#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int n,m;
    cin>>n>>m;
    char a[100][100];
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
            if((i+j)%2==0 && a[i][j]=='.')
            {
                a[i][j]='B';
            }
            else if((i+j)%2!=0 && a[i][j]=='.')
            {
                a[i][j]='W';
            }
        
        } 
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}