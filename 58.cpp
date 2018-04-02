#include <iostream>
using namespace std;
int main()
{
   int a,b,temp,i;
   cout<<"enter thevalue of and b";
   cin>>a>>b;
   cout<<"before swapping"<<a<<endl<<b;
   temp=a;
   a=b;
   b=temp;
   cout<<"after swapping"<<a<<endl<<b;
   return 0;
}
