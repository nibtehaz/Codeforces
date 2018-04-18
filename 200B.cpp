#include <stdio.h>
#include<string.h>
int main(void) 
{
	int n,sum=0,i,p;

	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		sum+=p;
	}
	
	printf("%.12lf\n",sum/(n*1.0));
	
	
	
	
	return 0;
}
