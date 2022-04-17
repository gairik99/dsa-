#include <bits/stdc++.h>
using namespace std;
int func(int ,int,int arr[],int);

/*void func(int,vector<int>,int arr[],int);
int arr[3];
vector<int>ds;

int main(){
int i;
for(i=0;i<3;i++)
  cin>>arr[i];
func(0,ds,arr,3);
}
void func(int ind,vector<int>ds,int arr[],int n)
{
    if(ind==n)
    {
        for(auto it:ds)
            cout<<it<<" ";

    cout<<endl;
    return;
    }
    ds.push_back(arr[ind]);

    func(ind+1,ds,arr,n);
    ds.pop_back();
    func(ind+1,ds,arr,n);
}

void func(int,int,vector<int>,int arr[],int);
int arr[3];
vector<int>ds;

int main(){
int i,sum=0;
for(i=0;i<3;i++)
  cin>>arr[i];
func(0,sum,ds,arr,3);
}
void func(int ind,int sum,vector<int>ds,int arr[],int n)
{
    if(ind==n)
    {
        if(ds.size()!=0&&sum%3==0){
           for(auto it:ds)
            cout<<it<<" ";

    cout<<endl;

    }
    return;
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    func(ind+1,sum,ds,arr,n);
    ds.pop_back();
    sum-=arr[ind];
    func(ind+1,sum,ds,arr,n);
}*/

int main(){
 int arr[3];
int i,sum=0;
for(i=0;i<3;i++)
  cin>>arr[i];
cout<<func(0,sum,arr,3);
}
int func(int ind,int sum,int arr[],int n)
{
    if(ind==n)
    {
        if(sum%3==0)
            return 1;
        else
            return 0;
    }
    sum+=arr[ind];
    int l=func(ind+1,sum,arr,3);
    sum-=arr[ind];
    int r=func(ind+1,sum,arr,3);
    return(l+r);


}

