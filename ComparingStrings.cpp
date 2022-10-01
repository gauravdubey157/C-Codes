#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int p,q;
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()==s2.size())
    {
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
        {
            p=i;
            break;
        }
    }
    for(int i=p+1;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
        {
            q=i;
            break;
        }
    }
    swap(s1[p],s1[q]);
    if(s1==s2)
    {
        cout<<"YES";
    }    
    else
    {
        cout<<"NO";
    }
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}