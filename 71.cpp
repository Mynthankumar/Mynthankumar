#include <iostream>
using namespace std;
int main()
{
string str,set,temp;
cin>>str;
temp = str;
for(int i = str.length();i >= 0; i--)
  {
       int j = 0;
       set=set+str[i];
       j++;
   }
    if(temp == set)
        cout<<"yes";
    else
        cout<<"No";
    return 0;
}
