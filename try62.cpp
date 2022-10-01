#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    long int a,b,r,l,w;
    cin>>a>>b>>r;
    if(2*r>a || 2*r>b)
    {
        cout<<"Second";
        return 0;
    }
    for(long int i=0;i<=a*b;i++)
    {
        if(i*2*r<a)
        {
            l=i;
        }
        if(i*2*r<b)
        {
            w=i;
        }
    }    
        if(l*w%2==0)
        {
          cout<<"Second";
        }
        else
        {
            cout<<"First";
        }
        
    return 0;
}