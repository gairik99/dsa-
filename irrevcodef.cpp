#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

  int main(){
   int t;  cin>>t;
    while(t--)
    {
     ll a,b;  cin>>a>>b;
    ll c=__gcd(a,b);


      if(c==1) cout<<"YES"<<endl;
      else       cout<<"NO"<<endl;
    }
   return 0;
 }
