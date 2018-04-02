#include <iostream>
using namespace std;
int main()
{
    string str;
    int i;
    cout<<"enter the string :";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        if(i%2==0)
        {
            cout<<str[i];
        }
    }
    cout<<" ";
   for(i=0;str[i]!='\0';i++)
   {
       if(i%2!=0)
       {
           cout<<str[i];
       }
   }
}
