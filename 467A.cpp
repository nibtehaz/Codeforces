#include <stdio.h>
#include<string.h>
int main(void) 
{
	int n,p,q,cnt;
	while(scanf("%d",&n)!=EOF)
	{
		cnt=0;
		while(n--)
		{ 
			scanf("%d %d",&p,&q);
			if(q-p>=2) cnt++;
		}
		printf("%d\n",cnt);
		
	}
	
	
	return 0;
}
