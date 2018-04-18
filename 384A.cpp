#include <stdio.h>
#include<string.h>
int main(void) 
{
	int n,i,j;
	
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("%d\n",n*(n/2));
		
		n=n/2;
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			printf("C.");
			printf("\n");
			
			for(j=0;j<n;j++)
			printf(".C");
			printf("\n");
			
		}
	}
	
	else
	{
		printf("%d\n",((n/2)+1)*((n/2)+1) + (n/2)*(n/2));
	
		n=n/2;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			printf("C.");
			printf("C\n");
			
			for(j=0;j<n;j++)
			printf(".C");
			printf(".\n");
		}
			for(j=0;j<n;j++)
			printf("C.");
			printf("C\n");
	}
	
	
	
	
	
	return 0;
}
