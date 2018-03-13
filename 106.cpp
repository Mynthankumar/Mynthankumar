#include <iostream>
using namespace std;

int main(){
	int a;
    cout<<"give the number";
	cin >> a;
	a=a+64;
	cout << "The ascii value of " << a << " is " << (char)a;
	return 0;
}
