#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int k;
    cin>>k;
    char m[16];
    for(int i=0;i<16;i++)
    {
        cin>>m[i];
    }
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,q=0;
    for(int i=0;i<16;i++)
    {
        if('1'==m[i])
        {
            a++;
        }
        else if('2'==m[i])
        {
            b++;
        }
        else if('3'==m[i])
        { 
            c++;
        }
        else if('4'==m[i])
        { 
            d++;
        }
        else if('5'==m[i])
        { 
            e++;
        }
        else if('6'==m[i])
        { 
            f++;
        }
        else if('7'==m[i])
        { 
            g++;
        }
        else if('8'==m[i])
        { 
            h++;
        }
        else if('9'==m[i])
        { 
            q++;
        }
    }
        if(a>2*k || b>2*k || c>2*k || d>2*k|| e>2*k|| f>2*k|| g>2*k|| h>2*k ||q>2*k)
        cout<<"NO";
        else
        cout<<"YES";
        return 0;
    }