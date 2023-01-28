#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    long long int n,r,cnt=0;
	    cin>>n>>r;
	   long long  int m=0,u=0,diff=INT_MAX,c=0;
	    vector<int>a(n);
	    vector<int>b(n);
	    for(int i=0;i<n;i++)
            cin>>a[i];
         for(int i=0;i<n;i++)
           cin>>b[i];
	     for(int i=0;i<n;i++)
	     {
	            c=a[i]-b[i];
	            if(c<diff&&c>=0&&a[i]<=r)
        	    {    m=a[i];
        	         u=b[i];
        	         diff=c;
    	         }
	     }


	     // cout<<m<<' '<<u;
	         while(r>=m)
	         {
	             r=(r-m+u);
	             cnt++;
	         }
	          cout<<cnt<<endl;
	    }
	return 0;
}
