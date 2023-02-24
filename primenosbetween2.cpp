#include<iostream>
using namespace std;
#include<cmath>

int prime(int n1){
    int i;
    for( i=2;i<sqrt(n1);i++)
    { 
        if(n1%i==0){
    break;}
    }
    if(n1%i!=0){
    cout<<n1<<endl;
    }
    return 0;
    }
int main(){
    int a,b;
    cout<<"ENTER THE LIMITS "<<endl;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
       prime(i);
    }
    return 0;
}