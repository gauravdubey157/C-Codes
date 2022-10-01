#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    int c=0,a=0;
    string str;
    cin>>str;
    int j=0;
    while(str[j]=='W' && str[j+1]=='U' && str[j+2]=='B')
    {
        j+=3;
        a=j; 
    }   
     
    for(int i=a;i<str.size();i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i+=2;
            c++;
        }
        else
        {
            cout<<str[i];
            c=0;
        }
        
        if(c==1)
        {
            cout<<" ";
        }
    }
    return 0;
}