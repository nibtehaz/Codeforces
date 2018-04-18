#include <stdio.h>
#include<string.h>
int main(void) 
{
	int inp, temp,group=1,n,i;
	
	scanf("%d",&n);
	
	scanf("%d",&inp);
	temp=inp;
	
	for(i=1;i<n;i++)
	{
		scanf("%d",&inp);
		if(temp!=inp)
		{
			temp=inp;
			group++;
		}
	
	}
	
	printf("%d\n",group);
	
	
	return 0;
}
