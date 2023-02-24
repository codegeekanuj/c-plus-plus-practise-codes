#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<4;i++)
    {
        for(i-0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(i>0 && i<3 && j>0 && j<3)
                cout<<" ";
                else
                cout<<"*";
            }
        cout<<endl;
        }
    }
    return 0;
}