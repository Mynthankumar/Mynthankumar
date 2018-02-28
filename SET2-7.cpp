#include <iostream>
using namespace std;

int main() {
	int b,a,rem,result=0;
	cout<<"enter the number\n";
    cin>>a;
    b=a;
while(a!=0)
    {
    	rem=a%10;
    	result+=rem*rem*rem;
    
    	a=a/10;
    }
if(result==b)
{
	cout<<"The given number is Armstrong number";
}
else
{
	cout<<"The given number is not Armstrong number";
}

	
	return 0;
}
