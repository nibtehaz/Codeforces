/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int n,v,ans[500],cnt,value,k,i,test;

    while(scanf("%d%d",&n,&v)!=EOF)
    {
        cnt=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&k);
            test=0;

            while(k--)
            {
                scanf("%d",&value);
                if(value<v&&test==0)
                {
                    ans[cnt++]=i+1;
                    test=1;
                }
            }
        }

        printf("%d\n",cnt);
        if(cnt>0)
        {
            printf("%d",ans[0]);

            for(i=1;i<cnt;i++)
                printf(" %d",ans[i]);


        }
         printf("\n");
    }

    return 0;

}


