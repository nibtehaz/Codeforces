/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005


int main()
{
    int zero,one,ase,faka,maxslot1,minslot1,slot0,i ;

    scanf("%d%d",&zero,&one);
    slot0=zero;
    maxslot1=one;
    minslot1=(one/2)+(one%2);

    //zero beshi
    if ((maxslot1+1)<slot0)
        printf("-1\n");
    //one beshi
    else if (minslot1>(slot0+1))
        printf("-1\n");

    else
    {
        //case 1 : dui pashe 0
        if (((slot0-1)*2)>=one)
        {
            ase=one;
            faka=slot0-1;
            printf("0");
            slot0-=1;
            for (i=0;i<slot0;i++)
            {
                if ( faka < ase )
                {
                    printf("11");
                    faka-=1;
                    ase-=2;
                }
                else if (faka ==ase)
                {
                    printf("1");
                    faka-=1;
                    ase-=1;
                }
                printf("0");

            }
            printf("\n");


        }

      //case 2 : ek pashe 0 ek pashe 1
        else if ((slot0*2)>=one)
        {
            ase=one;
            faka=slot0;

            for (i=0;i<slot0;i++)
            {
                printf("0");
                if ( faka < ase )
                {
                    printf("11");
                    faka-=1;
                    ase-=2;
                }
                else if (faka ==ase)
                {
                    printf("1");
                    faka-=1;
                    ase-=1;
                }
            }
            printf("\n");
        }
      //case 3 : dui pashe 1
        else
        {
            ase=one;
            faka = slot0+1;

            for (i=0;i<slot0;i++)
            {
                if ( faka < ase )
                {
                    printf("11");
                    faka-=1;
                    ase-=2;
                }
                else if (faka ==ase)
                {
                    printf("1");
                    faka-=1;
                    ase-=1;
                }
                printf("0");
            }

            if(ase==2)
                printf("11\n");
            else
                printf("1\n");
        }
    }



    return 0;
}

