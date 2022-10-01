#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int a[10][10],p,q,t;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(a[i][j]==1)
            {
                p=i;
                q=j;
            }
        }
    }        
    t=abs(p-3)+abs(q-3);
    cout<<t;
    return 0;
}