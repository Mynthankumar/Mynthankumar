#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() 
{
    float base, exponent, result;
 
    cout << "Enter base and exponent respectively:\n  ";
    cin >> base >> exponent;
 
    result = pow(base, exponent);
 
    cout  << result;
 
    return 0;
}
