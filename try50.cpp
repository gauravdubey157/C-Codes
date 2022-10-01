#include<bits/stdc++.h>
using namespace std;

int main()
{
    char temp;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        if(s1==s2)
        {
            cout<<"YES";
            return 0;
        }
        else
        {
            if(s1[i]!=s1[i+1] && s1[i]!=s2[i])
        {
            temp=s1[i];
            s1[i]=s1[i+1];
            s1[i+1]=temp;
        }
        } 
    }
    cout<<"NO";
    return 0;
}
