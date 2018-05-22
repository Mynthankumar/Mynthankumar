#include <iostream>
using namespace std;

int main() {
int sum=0,num;
cout<<"enter the number";
cin>>num;
while(num!=0)
{
	sum=sum+num%10;
	num=num/10;
}
cout<<sum;
	return 0;
}
