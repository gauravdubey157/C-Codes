#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
    }

    for(int i=0;i<n;i++)
    {
        
        string str;
        str=arr[i];
        if(str.size()<=10)
         {
             cout<<str<<endl;
         }
         else
         {
          cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
         }
    }
    return 0;
}