#include<iostream>
using namespace std;
int main ( ) 
{  int n, a[50], i, sum; 
      float avg;
      cout<<"\n Enter the Value of n : "; 
     
     cin>>n; 
      for (i = 0; i < n; i++) 
         { 
          
          cin>>a[i]; 
         } 
               sum=0; 
                for(i=0; i<n; i++) 
                    { 
                          sum=sum+a[i]; 
                    } 
                         avg=sum/n; 
                          cout<<"\nAverage of "<<n <<" Value is : "<<avg; 
                          return 0; 
} 
