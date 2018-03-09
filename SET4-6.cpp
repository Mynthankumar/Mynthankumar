#include <iostream>
using namespace std;

int main()
{
  int a,b,t;
  cout<<"enter thevalue of and b";
  cin>>a>>b;
  cout<<"before swapping"<<a<<endl<<b;
  t=a;
  a=b;
  b=t;
  cout<<"after swapping"<<a<<endl<<b;
  return 0;
}
