/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int light[1005]={0,},i,j,n,m,b;

    scanf("%d%d",&n,&m);

    for(i=0;i<m;i++)
    {
        scanf("%d",&b);

        for(j=b;j<=n;j++)
        {
            if(light[j]==0)
                light[j]=b;
        }
    }

    printf("%d",light[1]);

    for(i=2;i<=n;i++)
        printf(" %d",light[i]);
    printf("\n");

    return 0;

}


