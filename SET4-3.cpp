#include<iostream>
using namespace std;
int main()
{string s;
        int len,i,count=0;
  cout<<"enter string: ";
        getline(cin,s);
  len=s.size();
 for(i=0;i<len;i++)
       {
                if(s[i]==' ')
                {
                        count++;
                }
       }
   cout<<count;
  return 0;
}
