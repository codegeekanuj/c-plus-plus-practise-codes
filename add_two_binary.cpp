#include <iostream>
using namespace std;

int reverse(int n)
{
int k=0;
while(n>0)
{
int lastdigit =n%10;
k=k*10+lastdigit;
n/=10;
}
return k;
}
int addbinary(int a,int b){
  int l, m;
    int c = 0, s = 0;
    
    while (a > 0 && b > 0)
    {
        l = a % 2;
        m = b % 2;
        if (l == 0 && m == 0)
        {
            s = s * 10 + c;
            c = 1;
        }
        else if ((l == 0 && m == 1) || (l == 1 && m == 0))
        {
            if (c == 1)
            {
                s = s * 10 + 1;
            }
            else
            {
                c = 0;
            }
        }
        else
        {
            s = s * 10 + c;
            c = 1;
        }
        a = a / 10;
        b = b / 10;
    }
    while (b > 0)
    {
        if (c == 1)
        {
            if(b%2==1)
            {
                s=s*10+0;
                c=1;
            }
           else
           {
            s=s*10+1;
            c=0;
           }
        }
        else
        {
            s = s * 10 + (b%2);
        }
        b=b/10;
    }
    if(c==1)
    {
        s=s*10+1;
    }
    s=reverse(s);
    return 0;
    }
int main()
{
    int p,q;
    cin>>p>>q;
    cout<<addbinary(p,q)<<endl;
}
