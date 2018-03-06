#include<iostream>
 using namespace std;
 main()
{
   int n, a, first = 1, second = 1, next;
 
   cout << "Enter the number of terms " << endl;
   cin >> n;
for ( a = 0 ; a < n ; a++ )
   {
      if ( a <= 1 )
         next = a;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << endl;
   }
return 0;
}
