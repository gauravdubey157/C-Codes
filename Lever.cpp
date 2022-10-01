#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int l=0,r=0,a=0,k=0;
    string str;
    char ch;
    cin>>str;
    for(long int i=0;i<str.size();i++)
    {
        if(str[i]=='^')
        {
            a=i;
            break;
        }
    }
    for(long int i=a-1;i>=0;i--)
    {
        k++;
        if ((str[i] >= '0') && (str[i] <= '9'))
        {
            l=l+(str[i]-'0')*k;
        }
    }
    for(long int i=str.size()-1;i>a;i--)
    {
        if ((str[i] >= '0') && (str[i] <= '9'))
        {
            r=r+(str[i]-'0')*(i-a);
        }
    }
 if(r>l)
 {
    cout<<"right";
 }
 else if(r<l)
 {
     cout<<"left";
 }       
 else
 {
     cout<<"balance";
 }
 return 0;
}
 