#include<iostream>
#include<string>
using namespace std;

int main()
{
    int c=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i+3)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            str[i]=' ';
            str[i+1]=' ';
            str[i+2]=' ';
        }
    }
    for(int i=0;i<str.size();i++)
    {
    if(str[i]==' ')
    {
        str[i]=str[i]-str[i];
    }
    }
    for(int i=0;i<str.size();i++)
    {
    cout<<str[i];
    }
    return 0;
}
