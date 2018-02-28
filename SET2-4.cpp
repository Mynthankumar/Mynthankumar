#include <iostream>
using namespace std;

int main() {
	
    int num,a =10,b=20;

    

    printf("Print Odd Numbers in a given range a to b:\n");


 
    for (num = a; num <= b; num++)

        {

               if (num % 2 == 1)

                  printf ("%d ", num);

         }
	return 0;
}
