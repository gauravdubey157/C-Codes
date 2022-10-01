#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m1,m2;
    string n,s1,s2;
    cin>>n;
    s1=n[0],s2=n[3];
    s1=s1+n[1];
    s2=s2+n[4];
    m1=stoi(s1);
    m2=stoi(s2);
    if(m1>m2)
    {
        cout<<m1<<":"<<n[1]<<n[0];
    }
    else
    {
        s2=to_string(m1+1);
        if(m1+1<24)
        cout<<s2[0]<<s2[1]<<":"<<s2[1]<<s2[0];
        else
        cout<<"00:00";
    }
return 0;
}