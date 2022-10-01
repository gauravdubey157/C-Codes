#include<iostream>
using namespace std;

int main()
{
 string s1,s2,s3,s4;
 cin>>s1>>s2>>s3>>s4;
 if(2*s1.size()>=s2.size() && 2*s1.size()>=s3.size() && 2*s1.size()>=s4.size() || 2*s1.size()<=s2.size() && 2*s1.size()<=s3.size() && 2*s1.size()<=s4.size())
 {
  cout<<"A";
 }
 else if(2*s2.size()>=s1.size() && 2*s2.size()>=s3.size() && 2*s2.size()>=s4.size() || 2*s2.size()<=s1.size() && 2*s2.size()<=s3.size() && 2*s2.size()<=s4.size())
 {
   cout<<"B";
 }
 else if(2*s3.size()>=s1.size() && 2*s3.size()>=s2.size() && 2*s3.size()>=s4.size() || 2*s3.size()<=s1.size() && 2*s3.size()<=s2.size() && 2*s3.size()<=s4.size())
 {
   cout<<"C";
 }
 else if(2*s4.size()>=s1.size() && 2*s4.size()>=s3.size() && 2*s4.size()>=s2.size() || 2*s4.size()<=s1.size() && 2*s4.size()<=s3.size() && 2*s4.size()<=s2.size())
{
    cout<<"D";
}
else
{
    cout<<"C";
}

return 0;
}


  #include<iostream>
using namespace std;

int main()
{
 string s1,s2,s3,s4;
 cin>>s1>>s2>>s3>>s4;
 if(s1.size()>=2*s2.size() && s1.size()>=2*s3.size() && s1.size()>=2*s4.size())
 {
  cout<<"A";
 }
 else if(s1.size()<=2*s2.size() && s1.size()<=2*s3.size() && s1.size()<=2*s4.size())
 {
cout<<"A";
 }
 else if(s2.size()>=2*s1.size() && s2.size()>=2*s3.size() && s2.size()>=2*s4.size())
 {
   cout<<"B";
 }
 else if(s2.size()<=2*s1.size() && s2.size()<=2*s3.size() && s2.size()<=2*s4.size())
 {
cout<<"B";
 }
 else if(s3.size()>=2*s1.size() && s3.size()>=2*s2.size() && s3.size()>=2*s4.size())
 {
   cout<<"C";
 }
 else if(s3.size()<=2*s1.size() && s3.size()<=2*s2.size() && s3.size()<=2*s4.size())
 {
  cout<<"C";
 }
 else if(s4.size()>=2*s1.size() && s4.size()>=2*s3.size() && s4.size()>=2*s2.size())
{
    cout<<"D";
}
else if(s4.size()<=2*s1.size() && s4.size()<=2*s3.size() && s4.size()<=2*s2.size())
{
   cout<<"D";
}
else
{
    cout<<"C";
}
return 0;
}