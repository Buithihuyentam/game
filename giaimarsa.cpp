
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
   int n,c,m;
   cin>>m;
   n=9379;
   string e="100011100001";
   int p=1;
   for(int i=0;i<=113;i++){
    if(e[i]=='1'){
        p=(m*p)%n;
        m=(m*m)%n;
    }
    if(e[i]=='0'){
        m=(m*m)%n;
    }
   }
   cout<<p;
    return 0;
    }
