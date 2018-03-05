#include<iostream>
using namespace std;
int main()
{
int arr[100],n,i,small,large;
cout<<"Enter number of elements you want to insert ";
	cin>>n;for(i=0;i<n;i++)
	{
		
    
    cout<<"Enter element "<<i+1<<":";
		cin>>arr[i];
	}
small=arr[0];
	large=arr[0];

	for(i=1;i<n;i++)
	{
		if(arr[i]<small)
			small=arr[i];
		if(arr[i]>large)
			large=arr[i];
	}
cout<<"\nLargest element is :"<<large;
	cout<<"\nSmallest element is :"<<small;
    return 0;
}
