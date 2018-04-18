#include <stdio.h>
#include<string.h>
int main(void) 
{
	int mat[5][5],i,j,ans,r,c;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&mat[i][j]);
			if(mat[i][j]==1)
			{r=i+1;
			c=j+1;}
		}
	}
	
	ans=abs(c-3)+abs(r-3);
	
	printf("%d\n",ans);
	
	
		
	
	
	return 0;
}
