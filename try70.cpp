#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a,b,c,m[10],sum=0;
    cin>>n>>a>>b>>c;
    if(n%(a+b+c)==0)
    {
        m[0]=3*(n/(a+b+c));
        
    }
    else 
    m[0]=0;
    if(n%(a+b)==0)
    {
        m[1]=2*(n/(a+b));
        
    }
    else
    m[1]=0;
    if(n%(a+c)==0)
    {
        m[2]=2*(n/(a+c));
        
    }
    else
    m[2]=0;
    if(n%(b+c)==0)
    {
        m[3]=2*(n/(b+c));
        
    }
    else
    m[3]=0;
    if(n%(a)==0)
    {
        m[4]=1*(n/(a));
    }
    else
    m[4]=0;
    if(n%(b)==0)
    {
        m[5]=1*(n/(b));
    }
    else
    m[5]=0;
    if(n%(c)==0)
    {
        m[6]=1*(n/(c));
    }
    else
    m[6]=0;
    for(int i=0;i<7;i++)
    {
        if(sum<m[i])
        {
            sum=m[i];
        }
    }
    cout<<sum;
    return 0;
}