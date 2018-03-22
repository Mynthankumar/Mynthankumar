#include<iostream>
using namespace std;
int main()
{
 int i,m,arr[50],large;
  cout<<"enter the numbeer of elements";
  cin>>n;
   cout<<"enter the elements";
   for(i=0;i<m;++i)
   {
     cin>>arr[i];
    }

    for(i=1;i<m;++i)
    {
        if(arr[i]>arr[0])
                    arr[0]=arr[i];
    }
     cout<<"the large value is"<<arr[0];
    return 0;
}
