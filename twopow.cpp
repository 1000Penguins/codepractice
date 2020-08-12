#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int T,flag=1,st;
	float temp;
	long int N, check;

	cin>>T;

	while(T-->0)
	{
		cin>>N;

		if(N==1)
		{
			cout<<"1"<<endl;
			flag=0;
		}



		temp=sqrt(N);
		//cout<<temp<<endl;
		
		st=floor(temp);
		//cout<<st<<endl;

		while(flag!=0)
		{			
			check=pow(2,st);
			//cout<<check<<endl;

			if (check<N)
				{
				st=st+1;
				//cout<<st<<endl;
				}

			if(check>=N)
			{
				cout<<check<<endl;
				check=0;
				flag=0;
			}

		}

		flag=1;	
	}

	return(0);
}