#include<iostream>
using namespace std;
int main()
{
	long int num,i;
	
	cout<<"enter number\n";
	cin>>num;
	
	if(num==1)
	{
		cout<<"co-prime number";
		exit(0);
	}


	for(i=2;i<num;i++)
		{
			if(num%i==0)
				{
					cout<<"composite";
					exit(0);
				}
		}

	cout<<"prime";	

return 0;		
}