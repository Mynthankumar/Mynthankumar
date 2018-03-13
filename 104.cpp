#include <iostream>
using namespace std;

int main() 
{
    int n;
    int k, result = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> k >> n;


    while (n != 0) {
        result *= k;
        --n;
    }

    cout << result;
    
    return 0;
}
