#include <iostream>
using namespace std;int main() 
{
	int a,b,c,d,ch,div,mod;
	cout<<"select"<<"\n"<<"1.division"<<"\n"<<"2.modulo";
	cin>>ch;
	switch(ch)
	{
	case 1:
	    cout<<"enter the values";
	    cin>>a>>b;
	    div=a/b;
	    cout<<div;
	    break;
	   
  case 2:
	    cout<<"enter the value";
	    cin>>c>>d;
	    mod=c%d;
	     break;
	    default:
	    cout<<"exit";
	    cout<<mod;
	    break;
	   }
	return 0;
}
