#include<iostream>
using namespace std;int main() {
    int i = 65;
    int k = 120;
    cout<<" value before swapping \t"<<i<<"\t"<<k<<"\n";
i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    cout<<"value after swapping\t"<<i<<"\t"<<k;
 return 0;
}
