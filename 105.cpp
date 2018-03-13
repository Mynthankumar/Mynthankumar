#include <iostream>
using namespace std;

int main(){
	int n;
    cout<<"give the number";
	cin >> n;
	n=n+64;
	cout << "The ascii value of " << n << " is " << (char)n;
	return 0;
}
