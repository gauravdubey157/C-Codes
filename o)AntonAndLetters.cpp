#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0;
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
        for(int j=i+1;j<str.size()-1;j++)
        {
            if(str[i]==str[j])
            {
                str[i]=' ';
            }
        }
    }
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!='{' && str[i]!=' ' && str[i]!=',' && str[i]!='}')
        {
           count++;
        }
    }
    cout<<count;
    return 0;
}    