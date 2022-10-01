#include<iostream>
using namespace std;

int main()
{
    int c=0,p=0,q=0,r=0;
    string s;
    getline(cin,s);
    for(int i=0;s[i]!='$';i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            p++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            q++;
        }
        else 
        {
            r++;
        }
    }
    cout<<p<<q<<r;
    return 0;
}