#include<iostream>
using namespace std;
int main()
{
    string str;
    int set=1;
    cout<<"enter the value of string ";
    cin>>str;
    for(int i=0;i<=str.length();i++)
    {
        for(int j=i+1;j<=str.length();j++)
    {
        if(str[i]==str[j])
        {
            set=0;
         }
    }
    }
    if(set==0){
        cout<<"no";
    }
    else
    {
        cout<<"yes";
    }
}
