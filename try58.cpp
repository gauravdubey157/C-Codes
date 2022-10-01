
#include<bits/stdc++.h>
using namespace std;
int main(){
int y,k,n,i,z=0;
cin>>y>>k>>n;
for(i=1;i<=n/k;i++){
    if(k*i -y>0){
    cout<<k*i - y<<" ";
    z++;
}
}
if(z==0){
    cout<<-1;
}





}


