#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  getline(cin,str);
  for(int i=str.size()-1;i>=0;i--)
  {
      if(str[i]!='?' && str[i]!=' ')
      {
          if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
          {
              cout<<"YES";
              return 0;
          }
          else
          {
             cout<<"NO";
             return 0;
          }
      }
  }
}