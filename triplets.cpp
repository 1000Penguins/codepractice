//1st line T = test cases
//each test case has 2 lines
//1st line has integer N = size of array
//array of N elements space separated

//output: for each test case print the count of triplets in a new line. if no triplets print -1
// 1=<T<=100  3<=N<=10^5  1<=A[i]<=10^6

#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int T;
	long N;
	int i,j;
	long A[10000];
	int tripcount=0, count=1;

	cin>>T;

	while(T>0)
	{
		cin>>N;
		for(i=0;i<N;i++)
			cin>>A[i];

		for(i=0;i<N;i++)
		{

			for(j=i+1;j<N;j++)
			{
				if(A[j]==(A[i]+A[count]))
				{
					tripcount=tripcount+1;
				}
			}

			count=count+1;
		}

		if(tripcount==0)
			cout<<"-1";
		else
			cout<<tripcount;

		T=T-1;

	}

	return(0);
}