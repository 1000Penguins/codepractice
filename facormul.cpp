#include<iostream>
using namespace std;

int main()
{
	int t,n,x=1,res=0,count=0,ifone=0;

	cin>>t;

	while(t-->0)
	{
		cin>>n>>x;

		int a[n];

		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}

		for(int i=0; i<n; i++)
		{
			if(a[i]%x==0)
			{
				count=count+1;
				
				if(count==1)
					ifone=a[i];
				
				res=res|a[i];
				//cout<<res<<"\t";
				continue;
			}

			else
				continue;

		}

		if(count==0)
			cout<<"0"<<endl;

		else if(count==1)
			cout<<ifone<<endl;

		else
			cout<<res<<endl;

		res=0;
		count=0;
	}

	return(0);
}