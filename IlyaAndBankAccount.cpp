#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=0)
    {
       cout<<n;
    }
    else
    {
        string str1,str2;
        str1=to_string(n);
        str2=to_string(n);
        int l=str1.size();
        str1.erase(l-1,1);
        int a=stoi(str1);
        str2.erase(l-2,1);
        int b=stoi(str2);
        if(a>b)
        {
            cout<<a;
        }
        else
        {
            cout<<b;
        }
    }
   return 0;
}
