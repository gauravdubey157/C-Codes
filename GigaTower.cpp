#include<iostream>
#include<string>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    bool ans=false;
    for(long int i=n+1;i<=8888888888;i++)
    {
      string str;
      str=to_string(i);
      for(int j=0;j<str.size();j++)
      {
      if(str[j]=='8')
      {
          cout<<i-n;
          ans=true;
          break;
      }
      }
      if(ans==true)
      {
        break;
      }
    }
    return 0;
}
