#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int c1=0,c2=0;
	    for(int i=1; i<=n ;i++){
    		long long x;
    		cin >> x;
    		if(x==1)
    		c1++;
    		else if(x==2)
    		c2++;
	}
	    long long int ans=0;
	    ans=c1*(n-c1)+c1*(c1-1)/2+c2*(c2-1)/2;
	    cout<<ans<<endl;
	}
	return 0;
}

