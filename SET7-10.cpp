#include <iostream>
#include<cmath>
using namespace std;
int main()
{
   int a,num,i;
   cout<<"enter the value";
   cin>>a;
   for(i=0;i<a;i++)
   {
   num=pow(2,i);
   if(num>a)
   {
   cout<<num;
   break;
   }
    }
  }
