#include<iostream>
using namespace std;

int gcd(long long int a, long long int b)
{
	if(a==0)
		return b;

	return gcd(b%a,a);
}

int findgcd(long long int a[], int n)
{
	long long int r=a[0];
	
	for(int i=1; i<n; i++)
		r=gcd(a[i],r);

	return r;
}
int main()
{
	int t,n;

	cin>>t;

	while(t-->0)
	{
		cin>>n;
		long long int a[n];

		for(int i=0; i<n; i++)
			cin>>a[i];

		cout<<findgcd(a,n)<<endl;

	}

	return(0);
}