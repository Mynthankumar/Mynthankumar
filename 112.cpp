#include <iostream>

using namespace std;

int main()
{
    int k,i,a[3],n;
    cout<<"enter the two variables";
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
    if(a[i]==k)
    {
        cout<<"yes";
    }
        
    }
}
