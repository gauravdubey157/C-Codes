#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int temp;
    int s=str.size();
    for(int j=0;j<s;j++)
    {
    for(int i=0;i<s-j-2;i++)
    {
     if(str[i]!='+')
     {
       if(str[i]>str[i+2])
       {
           temp=str[i];
           str[i]=str[i+2];
           str[i+2]=temp;
       }
     }
    }
    }
    cout<<str;
    return 0;
}