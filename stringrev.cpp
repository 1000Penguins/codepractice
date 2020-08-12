#include<iostream>
#include<cstring>
using namespace std;

string reverse(char word[50]);

int main()
{
    char str[50];
    cout<<"enter string\n";
    cin>>str;

    string rev=reverse(str);
    cout<<rev;

return 0;
}

string reverse(char word[50])
{
    char a='a';
    char b='b';
    char *front=&a;
    char *rear=&b;

    for(int i=0;i<(strlen(word)/2);i++)
    {
        *front=word[i];
        *rear=word[strlen(word)-1-i];
        word[i]=*rear;
        word[strlen(word)-1-i]=*front;
    }

    return word;
}