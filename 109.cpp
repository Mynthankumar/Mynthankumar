#include<iostream>
 
using namespace std;
 
int main()
{
int a[100],i;

cout<<"enter the values";

for(i=0;i<=10;i++)
{
cin>>a[i];
}
for(i=1;i<10;i++)
{
    if(a[0]>a[i])
    {
        a[0]=a[i];
        
    }
    
}
cout<<"the value is"<<a[0];
}
