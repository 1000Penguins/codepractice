#include <stdio.h>
#include <stdlib.h>
int main() 
{
    
    int T, N, S;
    int A[100];
    int i,j;
    int tempsum=0, index=0;
    
    scanf("%d",&T);  //number of test cases
    
    for(i=0;i<T;i++)
    {
    	{
       		scanf("%d%d",&N,&S);
        	for(j=1;j<=N;j++)
            	scanf("%d",&A[j]);
    	}
    }   
    
    
    for(i=0;i<T;i++)
    {
    	for(i=1;i<=N;i++)
    	{
        	for(j=i;j<=N;j++)
        	{
            	tempsum=tempsum+A[j];
            
            	if(tempsum>S)
            	{
                	tempsum=0;
                	break;
            	}
            
            	else if(tempsum==S)
            	{
                	printf("%d %d",i,j);
                	exit(0);
            	}

            	else if(tempsum<S)
            		continue;
        	}
    	}
	}

    printf("-1");
	return 0;
}