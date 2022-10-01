#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,j=0;
    string s,t;
    cin>>s>>t;
    while(j<t.size())
    {
        if(s[i]==t[j])
    {
        i++;
        j++;
    }
    else
    {
        j++;
    }
    }
    cout<<i+1;   
    return 0;
}