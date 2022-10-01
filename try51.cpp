#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size()-2;i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            str[i]=' ';
        }
    }
    for(int i=0;i<str.size()-2;i++)
    {
        if(str[i]==' ' and str[i+1]==' ' || str[i]==' ' and str[i+1]==' ' and str[i+2]==' ' )
        {
            str[i]=' ';
        }
    }
    for(int i=0;i<str.size()-2;i++)
    {
        if(str[i]!=' ')
        {
        cout<<str[i];
        }
        