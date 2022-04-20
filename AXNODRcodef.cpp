#include<bits/stdc++.h>
#define ll long long
#define lld long double
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    if(n%4==2 ||n%4==3)
       cout<<3<<endl;
    else if(n%4==0)
       cout<<n+3<<endl;
    else
     cout<<n<<endl;

}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{solve();}
}

