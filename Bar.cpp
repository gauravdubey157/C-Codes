#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int n,c=0;
    string a;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }   
    for(int i=0;i<n;i++)
    {    
        if(str[i]=="ABSINTH" || str[i]=="BEER" || str[i]=="BRANDY" || str[i]=="CHAMPAGNE" || str[i]=="GIN"|| str[i]=="RUM"|| str[i]=="SAKE" || str[i]=="TEQUILA" || str[i]=="VODKA" || str[i]=="WHISKEY" || str[i]=="WINE")
        {
          c++;
        }
        else
        {
          a=str[i];
            if(isdigit(a[0]))
            {
              if(stoi(a)<18)
              {
                  c++;
              }
            }
        }
    }    
        cout<<c;
        return 0;
}