#include<iostream>
using namespace std;

int main(){
    int l=0,m=7;
    for(int i=0;i<4;i++)
      {
        for(int j=0;j<=7;j++)
         {
            if(j<=l || j>=m)
            cout<<"*";
            else
            cout<<" ";
         }
         l++;
         m--;
         cout<<endl;  
      }
    for(int i=0;i<4;i++)
      {
        for(int j=0;j<=7;j++)
         {
            if(j<=l || j>=m)
            cout<<"*";
            else
            cout<<" ";
         }
         l--;
         m++;
         cout<<endl;  
      }
}