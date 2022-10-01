#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,b,ls;
	cin>>t;
	while(t--)
	{
		cin>>b>>ls;
		float max=sqrt(b*b+ls*ls);
		float min=sqrt(ls*ls-b*b);
		cout<<min<<" "<<max<<endl;
		
		
	}	
	return 0;
}