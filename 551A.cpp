#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,rate[3000],rank[3000],cnt,i,j;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&rate[i]);

        for(i=0;i<n;i++)
        {
            cnt=0;
            for(j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                if(rate[j]>rate[i])
                    cnt++;
            }
            rank[i]=1+cnt;
        }

        printf("%d",rank[0]);

        for(i=1;i<n;i++)
            printf(" %d",rank[i]);

        printf("\n");


    }

    return 0;

}
