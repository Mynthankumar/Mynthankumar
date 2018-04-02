#include<iostream>
using namespace std;
int main()
{
int i,n,arr[50],large;
cout<<"enter the numbeer of elements";
cin>>n;
cout<<"enter the elements";
    for(i=0;i<n;++i)
    {
        
        cin>>arr[i];
    }

    for(i=1;i<n;++i)
    {
        if(arr[i]<arr[0])
                    arr[0]=arr[i];
        
   
    }
     cout<<"the small value is"<<arr[0];
    return 0;
}
