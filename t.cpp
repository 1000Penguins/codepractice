#include<iostream>
using namespace std;

int main()
{
	char *cp;
	int ia[10]={65,66,67,68,69,70,71,72,73,74};
	cp=(char*)ia;

	for(int i=0;i<10;i++)
	{
		cout<<""<<*cp++<<"\t";
	}
	cout<<"\n";
}