#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	int num,sum=0,i,b,a;

	scanf("%d",&num);

	for(i=2;i<num;i++)
	{
		b=num;
		for(;;)
		{
			sum+=b%i;
			b/=i;
			if(b==0)
				break;

		}
	}


	b=num-2;
	a=sum;

	for(;;)
	{
		i=a%b;
		a=b;
		b=i;

		if(b==0)
			break;
	}


	printf("%d/%d\n",(sum/a),(num-2)/a);


    return 0;
}

