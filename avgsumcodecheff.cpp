#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        long int n,k,v;
        cin>>n>>k>>v;
        long long int totaln=0;
        for(int i=0;i<n;i++)
        {
            long int var;
            cin>>var;
            totaln+=var;
        }
        long long int sum=(n+k)*v;
        long long int rem=sum-totaln;
        if(rem<=0)
         cout<<-1<<endl;
        else if(rem%k!=0)
            cout<<-1<<endl;
            else
                cout<<rem/k<<endl;
    }

	return 0;
}

