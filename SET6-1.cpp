#include <iostream>
using namespace std;
int main()
{
   
   int a;
    cin>>a;
    string str=to_string(a);
    for(a=0;a<str.length();a++)
 {
     cout<<str[a]<<" ";
 }
}
