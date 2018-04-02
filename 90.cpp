#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
	 char str[50];
	 int i,n;
	 cout<<"enter the alphanumeric string:";
	 cin>>str;
	 n=strlen(str);
	 for(i=0;i<n;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			cout<<str[i];
		}
	}
	return 0;
}
