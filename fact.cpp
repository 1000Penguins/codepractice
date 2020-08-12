#include<iostream>
using namespace std;

int fct=1;

int fact(int x)
{
    
    if(x==1)
    {
        return fct;
    }

    else
    {
        
        fct=x*fact(x-1);
        
    }
    

}

int main()
{
    int num,factorial;
    
    cout<<"enter number:\n";
    cin>>num;

    if(num==1 || num==0)
        {
            cout<<"factorial is 1";
            exit(0);
        }

    factorial=fact(num);
    cout<<"factorial. is "<<factorial;

    return(0);
}
