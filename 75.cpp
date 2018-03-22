#include<iostream>
using namespace std;
int main()
{
string str;
 int n;
cout<<"enter the value of string ";
    cin>>str;
    n=str.length()/2;
    if(str.length()%2==0)
    {
        str[n-1]='*';
        str[n]='*';
    }
    else
    {
        str[n]='*'; 
    }
    cout<<str;
}
