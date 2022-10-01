#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0;
    string str;
    cin>>str;
    if(str.size()<5)
    cout<<"NO";
    else
    {
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='h')
        {
            i++;
            e:
          if(str[i]=='e')
          {
             i++;
             l1:
             if(str[i]=='l')
             {
                 i++;
                 l2: 
                 if(str[i]=='l')
                 {
                    i++;
                    o:
                    if(str[i]=='o')
                    {
                        cout<<"YES";
                        break;
                    }
                      else if(i>=str.size())
          {
              cout<<"NO";
          }
          else
          {
              i++;
              goto o;
          }
                 }
                   else if(i>=str.size())
          {
              cout<<"NO";
          }
          else
          {
              i++;
              goto l2;
          }
             }
             else if(i>=str.size())
          {
              cout<<"NO";
          }
          else
          {
              i++;
              goto l1;
          }
          }
          else if(i>=str.size())
          {
              cout<<"NO";
          }
          else
          {
              i++;
              goto e;
          }
        }
    }
}   
 return 0;
}           

          
          