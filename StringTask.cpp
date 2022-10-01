#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    str.erase(remove(str.begin(), str.end(), 'a'), str.end());
    str.erase(remove(str.begin(), str.end(), 'e'), str.end());
    str.erase(remove(str.begin(), str.end(), 'i'), str.end());
    str.erase(remove(str.begin(), str.end(), 'o'), str.end());
    str.erase(remove(str.begin(), str.end(), 'u'), str.end());
    str.erase(remove(str.begin(), str.end(), 'y'), str.end());
    for(int i=0;i<str.size();i++)
    {cout<<"."<<str[i];}
    return 0;
}
