#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	int n,d,t,sum,ans;

	while(scanf("%d%d",&n,&d)!=EOF)
    {
        sum=0;
        ans=(n-1)*10;
        while(n--)
        {
            scanf("%d",&t);
            sum+=t;

        }

        ans+=sum;

        if(ans>d)
            printf("-1\n");

        else
            printf("%d\n",(d-sum)/5);
    }
    return 0;
}
