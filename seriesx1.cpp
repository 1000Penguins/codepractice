#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int T, X;
	long int res;

	cin>>T;

	while(T-->0)
	{

		cin>>X;
		res=pow(X,3)+X;
		cout<<res<<endl;

	}

	return(0);

}