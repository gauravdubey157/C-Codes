#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    if(n%(a+b+c)==0)
    {
        cout<<3*(n/(a+b+c));
    }
    else if(n%(a+b)==0)
    {
        cout<<2*(n/(a+b));
    }
    else if(n%(a+c)==0)
    {
        cout<<2*(n/(a+c));
    }
    else if(n%(b+c)==0)
    {
        cout<<2*(n/(b+c));
    }
    else if(n%(a)==0)
    {
        cout<<1*(n/(a));
    }
    else if(n%(b)==0)
    {
        cout<<1*(n/(b));
    }
    else if(n%(c)==0)
    {
        cout<<1*(n/(c));
    }
    return 0;
}