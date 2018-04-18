#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	long long int x,y,z,m,a,b;

	while(scanf("%lld%lld%lld%lld",&x,&y,&a,&b)!=EOF)
	{
		m=x*y;
		while(1)
		{
			if(x<y)
			{
				x=x^y;
				y=x^y;
				x=x^y;
			}
			z=x%y;
			x=y;
			y=z;

			if(y==0)
				break;
		}

		x=m/x;

		printf("%lld\n",(b/x)-((a-1)/x));
	}



    return 0;
}
