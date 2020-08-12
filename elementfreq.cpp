#include<iostream>
using namespace std;



int j, cnt = 0;
int size, i, frq;
int arr[100],ele;

template <class t8>

int freq(t8 a[], int len, t8 ele)
{
    
    for(j=0;j<len;j++)
    {
        if(a[j]==ele)
        {
                cnt+=1;
                //cout<<cnt;
        }        
    }

    return cnt;
}

int main()
{
    

    cout<<"enter size of array:\n";
    cin>>size;

    cout<<"enter array elements:\n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter element to be found:\n";
    cin>>ele;

    frq=freq<int>(arr,size,ele);

    cout<<"the element to be found occurs "<<frq<<" times"<<endl;

    return 0;
}


