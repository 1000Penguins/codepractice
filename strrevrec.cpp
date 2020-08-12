#include<iostream>
#include<cstring>
using namespace std;

void reverse(char word[50],int start,int stop);

int main()
{
    char str[50];
    cout<<"enter string\n";
    cin>>str;
    
    int start1,stop1;
    
    
    start1=0;
    stop1=strlen(str);
    reverse(str,start1,stop1);
     return 0;
}

void reverse(char word[50],int start,int stop)
{
    char a='a';
    char b='b';
    char *front=&a;
    char *rear=&b;
    int count;

    if(count>(strlen(word)))
    {
        return;
    }
    
    else
    {
    *front=word[start];
    *rear=word[stop];
    
    start++;
    stop--;

    reverse(word,start,stop);

    cout<<word;

    }
}