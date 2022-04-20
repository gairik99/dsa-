
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {cin>>arr[i];}

        for(int i=0;i<n;i++)
         arr[i]=arr[i]%2;

        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
         {if(arr[i]==0)
            cnt1++;
          else
            cnt2++;
         }
         if(cnt2%2!=0)
            cout<<cnt1<<endl;
         else
            {
             cout<<min(cnt2/2,cnt1)<<endl;

            }
    }



}
