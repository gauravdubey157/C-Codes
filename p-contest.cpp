#include<bits/stdc++.h>
using namespace std;
                                    //https://codeforces.com/contest/1520/problem/A
int main()
{
    int n,t;
    string str;
    char sum=;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t>>str;
        char sum=str[0];
        for(int j=1;j<t;j++)
        {
          if(str[j]!=sum)
          {
            sum=str[j];
          }

    }
