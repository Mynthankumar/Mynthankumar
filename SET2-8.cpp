#include <iostream>
using namespace std;
int main()
{
  int num1, num2, i, n, b, s;
  cout << "Enter first number:\n ";
  cin >> num1;
  cout << "Enter second number:\n ";
  cin >> num2;
  cout << "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl;
  for(i=num1; i<=num2; i++){
        s=0;
        n=i;
        for(;n>0;n/=10){
            b=n%10;
            s=s+b*b*b;
        }
        if(s==i){
            cout << i << endl;
        }
  }
  return 0;
}
