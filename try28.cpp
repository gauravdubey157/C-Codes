#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            str[i]=' ';
            str[i+1]=' ';
            str[i+2]=' ';
        }
    }

   for(int i=0;i<str.size();i++)
   {
     if(str[0]==' ')
     {
       for(int j=0; str[j]==' ';j++)
    {
        str[j]=str[j]-str[j];
    }
     }
       if(str[i]==' ')
   {
    for(int j=i+1; str[j]==' ';j++)
    {
        str[j]=str[j]-str[j];
    }
   }
   } 
   for(int i=0;str[i]==' ';i++)
   {
       a++;
   }
   for(int i=a;i<str.size();i++)
   {
    cout<<str[i];
   } 
    return 0;
}