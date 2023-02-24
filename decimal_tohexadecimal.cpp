// program to convert decimal to hexa decimal
#include<iostream>  
using namespace std;

int main(){
    int s=0,p,n,num,l,k=0;
    cout<<"\n ENTER THE NUMBER IN DECIMAL"<<endl;
    cin>>num;
    n=num;
    while(n>0){
        p=n%16;
        s=s*10+p;
        n=n/16;
    }
    while(s>0){
        l=s%10;
        k=k*10+l;
        s=s/10;
    }
    cout<<"NO IN HEXADECIMAL IS "<<k;
    return 0;
}