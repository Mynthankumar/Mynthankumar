#include <iostream>
using namespace std;


int main()
{
int num,a=0;

cout<<"Enter any num : ";
cin>>num;
if(num<0)
{
num=num * -1;
}
else if(num==0)
{
num=1;
}
while(num>0)
{
num=num/10;
a++;
}
cout<<"\n no of digits in given number is: "<<a;

	return 0;
}
