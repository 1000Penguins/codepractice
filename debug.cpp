#include<iostream>
using namespace std;

int main()
{
    int x=0;
    char y='b';
    long l=5;
    
    
    try
    {
        if(x==0)
            throw x;
        if(y=='a')
            throw y;
        cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
        if(l==5)
            throw l;
    }
    
    catch(int)
    {
        cout<<"cought int\n";

    }

    catch(char)
    {
        cout<<"cought char\n";
    }

    catch(long)
    {
        cout<<"caught long\n";
    }

    cout<<"end\n";

    return 0;
}