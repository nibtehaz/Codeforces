#include <stdio.h>
#include<string.h>
#include<math.h>


int main()
{
    int n,year[200],a,b,i,ans;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<n;i++)
            scanf("%d",&year[i]);

        scanf("%d%d",&a,&b);
        ans=0;
        for(i=a;i<b;i++)
        {
            ans+=year[i];
        }

        printf("%d\n",ans);
    }

	return 0;
}

