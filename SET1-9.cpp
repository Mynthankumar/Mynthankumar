#include <iostream>
using namespace std;

int main() {
	int i,N,k,sum=0;
	cin>>N;
	cout<<"Enter value of K\n";
	cin>>k;
	int n[N];
	for( i=0;i<N;i++)
	{
		cin>>n[i];
	}
	for(i=0;i<k;i++)
	{
		sum+=n[i];
	}
	cout<<"Sum is "<<sum;
	
	return 0;
}
