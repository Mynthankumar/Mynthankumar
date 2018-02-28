#include <iostream>
using namespace std;
 
int main() {
 
	int num, rem, ori, rev=0;
	cout<<"Enter a number : ";
	cin>>num;
	ori=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10 + rem;
		num=num/10;
	}
	if(rev==ori) 
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not Palindrome";
	}
 
 
	return 0;
}
