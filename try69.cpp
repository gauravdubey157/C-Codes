#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int n,a,b,c,d,p=0;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
       cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++)
    { 
        a=0,b=0,c=0,d=0;
        for(int j=0;j<n;j++)
        {
            if(x[i]>x[j] && y[i]==y[j] && i!=j)
            a++;
            else if(x[i]<x[j] && y[i]==y[j] && i!=j)
            b++;
            else if(x[i]==x[j] && y[i]>y[j] && i!=j)
            c++;
            else if(x[i]==x[j] && y[i]<y[j] && i!=j)
            d++;
        }
    if(a>0 && b>0 && c>0 && d>0)
    {
        p++;
    }
    }
    cout<<p;
    return 0;
}


