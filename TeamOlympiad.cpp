#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,b=0,c=0,w=0,p,q,r;
    cin>>n;
    int m[n];
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
    }
    for(int i=0;i<n;i++)
    {
    if(m[i]==1)
    {
        a++;
    }
    else if(m[i]==2)
    {
        b++;
    }
    else if(m[i]==3)
    {
        c++;
    }
    if(a<=b && a<=c)
    {
        w=a;
    }
    else if(b<=a && b<=c)
    {
        w=b;
    }
    else if(c<=a && c<=b)
    {
        w=c;
    }
    }
    cout<<w<<endl;
    int j=0;
    while(j<w)
    {
     for(int i=0;i<n;i++)
    {
        if(m[i]==1)
        {
            p=i+1;
            m[i]=' ';
            break;
        }
    }   
    for(int i=0;i<n;i++)
    {
        if(m[i]==2)
        {
            q=i+1;
            m[i]=' ';
            break;
        }
    } 
    for(int i=0;i<n;i++)
    {
        if(m[i]==3)
        {
            r=i+1;
            m[i]=' ';
            break;
        }
    } 
     j++;
     cout<<p<<" "<<q<<" "<<r<<endl;
    }
    return 0;
}