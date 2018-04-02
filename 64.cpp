#include <iostream>
using namespace std;
int main(){
  int a,b,n;
  cout<<"Enter your number";
  cin>>a;
  cout<<"enter your another number";
  cin>>b;
  n=a+b;
  cout<<"the value is"<<n;
  if(n%2==1)
  {
    cout<<"it is odd";
  }
  else
  {
   cout<<"it is even";
  }
  return 0;
}
