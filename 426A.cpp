/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int n,S,sum,max,inp;

    while(scanf("%d%d",&n,&S)!=EOF)
    {
        sum=0;
        max=0;

        while(n--)
        {
            scanf("%d",&inp);
            sum+=inp;

            if(inp>max)
                max=inp;
        }

        sum-=max;

        if(sum<=S)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;

}
