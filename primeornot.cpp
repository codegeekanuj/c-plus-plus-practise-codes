#include<iostream>
using namespace std;
#include<cmath>

int main(){
    int n;
    cin>>n;
    int a=n,i;
    for( i=2;i<=sqrt(a);i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime";
            break;
        }
    }
    if(n%i!=0)
    cout<<"yes its a prime number";
    return 0;
}