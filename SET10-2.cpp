#include <iostream>
using namespace std;
int main() 
{
int a,b,i,sum=0;
cout<<"enter the number";
cin>>a;
for(i=1;i<=a;++i)
{
  cin>>b;
	sum=sum+b;
}
cout<<sum;
return 0;
}
