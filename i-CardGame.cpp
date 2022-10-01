#include<bits/stdc++.h>
using namespace std;
 
//can be done by using rank in an array 

int main()
{ 
  char c;
  string s1,s2;
  cin>>c>>s1>>s2;
  if(s1[1]==c and s2[1]!=c)
  {
    cout<<"YES";
    return 0;
  }
  else if(s1[1]!=c and s2[1]==c)
  {
    cout<<"NO";
    return 0;
  }
  if(s1[1]==s2[1])
  {if((s1[0]=='A') && (s2[0]=='6'||s2[0]=='7'||s2[0]=='8'||s2[0]=='9'||s2[0]=='T'||s2[0]=='J'||s2[0]=='Q'||s2[0]=='K'))
  cout<<"YES";
  else if((s1[0]=='K') && (s2[0]=='6'||s2[0]=='7'||s2[0]=='8'||s2[0]=='9'||s2[0]=='T'||s2[0]=='J'||s2[0]=='Q')) 
cout<<"YES";
  else if((s1[0]=='Q') && (s2[0]=='6'||s2[0]=='7'||s2[0]=='8'||s2[0]=='9'||s2[0]=='T'||s2[0]=='J')) 
cout<<"YES";
  else if((s1[0]=='J') && (s2[0]=='6'||s2[0]=='7'||s2[0]=='8'||s2[0]=='9'||s2[0]=='T')) 
cout<<"YES";
  else if((s1[0]=='T') && (s2[0]=='6'||s2[0]=='7'||s2[0]=='8'||s2[0]=='9')) 
cout<<"YES";
  else if((s1[0]=='9') && (s2[0]=='6'||s2[0]=='7'||s2[0]=='8')) 
cout<<"YES";
  else if((s1[0]=='8') && (s2[0]=='6'||s2[0]=='7')) 
  cout<<"YES";
  else if((s1[0]=='7') && (s2[0]=='6'))
  cout<<"YES";
  else 
  {
    cout<<"NO";
    return 0;
  }
  }
  else
  {
    cout<<"NO";
    return 0;
  }
}
