#include<iostream>
#include<string>

using namespace std;

int main()
{ 
    int n,k,s=0;
    cin>>n>>k;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        string str;
        str=arr[i];
        int c=0;
        for(int j=0;j<str.size();j++)
        {
            
            if(str[j]=='4' || str[j]=='7')
            {c++;}
        }
        if(c<=k)
        {
            s++;
        }
          
    }
    cout<<s;
    return 0;
}