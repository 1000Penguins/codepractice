#include<iostream>
using namespace std;

int main()
{
    int a,b,diff=0,less,big;
    
    cout<<"enter a and b in order:\n";
    cin>>a>>b;
    
    if(a==b)
        {
            cout<<"0";
            exit(0);
        }
    
    if(a<b)
        {
            less=a;
            big=b;
        }
    
    else
    {
        less=b;
        big=a;
    }

   diff=big-less;

    cout<<diff-1;
    
}