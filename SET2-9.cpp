#include <iostream>
using namespace std;
int main() {
	int i, no, fact=1;
cout<<"Enter the  no :\n ";
cin>>no;
for(i=1;i<=no;i++)
{
fact=fact*i;
}
cout<<"Factorial: "<<fact;
return 0;
}
