#include<bits/stdc++.h>
using namespace std;
 
//Plate Game

int main()
{ 
    long int a,b,r;
    cin>>a>>b>>r;

        if(2*r>min(a,b))
        {
          cout<<"Second";
        }
        else
        {
            cout<<"First";
        }
        
    return 0;
}