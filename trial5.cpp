#include<iostream>
#include<string>
using namespace std;

int main()
{ 
    string str;
  cin>>str;
  int c=0;
    for(int i=0;i<str.size();i++)
    {
      if(str[i]!=str[i+3]&&str[i]!=','&&str[i]!='{'&&str[i]!='}'&&str[i]!=' ')
      {
       
        c++;

      }  
    }
    
    return 0;
}