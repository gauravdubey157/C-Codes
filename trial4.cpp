#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    { 

     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
     {str[i]=str[i]-str[i];}
    }
    for(int j=0;j<str.size();j++)
    {
        str.insert(2, '.');
    }
    cout<<str;
    return 0;
}