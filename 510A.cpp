/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int n,m,i,j,state;

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        state=0;

        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<m;j++)
                    printf("#");
                printf("\n");
            }
            else
            {
                if(state==0)
                {
                    for(j=1;j<m;j++)
                        printf(".");
                    printf("#");
                    printf("\n");
                    state=1;

                }
                else
                {
                    printf("#");
                    for(j=1;j<m;j++)
                        printf(".");
                    printf("\n");
                    state=0;
                }

            }
        }
    }

    return 0;

}


