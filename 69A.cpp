/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int i,j,k,x,y,z,n;

    while(scanf("%d",&n)!=EOF)
    {
        x=0;
        y=0;
        z=0;

        while(n--)
        {
            scanf("%d%d%d",&i,&j,&k);
            x+=i;
            y+=j;
            z+=k;
        }

        if(x==0&&y==0&&z==0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

