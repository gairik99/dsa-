#include<bits/stdc++.h>
using namespace std;

string getString(int d){
    if(d==2)
        return "abc";
    else if(d==3)
        return "def";
    else if(d==4)
        return "ghi";
    else if(d==5)
        return "jkl";
    else if(d==6)
        return "mno";
    else if(d==7)
        return "pqrs";
    else if(d==8)
        return "tuv";
    else if(d==9)
        return "wxyz";
    else
        return " ";
}
int keypad(int n,string str[])
{
    if(n==0)
    {
        str[0]="";
        return 1;
    }
    int d=n%10;
    int num=n/10;
    int size1=keypad(num,str);
    string option=getString(d);
    for(int i=0;i<option.length()-1;i++)
    {
        for(int j=0;j<size1;j++)
        {
            str[size1*(i+1)+j]=str[j];
        }
    }
    int k=0;
    for(int i=0;i<option.length();i++)
    {
        for(int j=0;j<size1;j++)
        {
            str[k]=str[k]+option[i];
            k++;
        }

    }
    return size1*option.length();
}

int main(){
int n;
cin>>n;
string str[1000];
int count1=keypad(n,str);
for(int i=0;i<count1;i++)
    cout<<str[i]<<endl;
}
