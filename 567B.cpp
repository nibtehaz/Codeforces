/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int n,id[1000005]={0,},stay=0,i,inc=0,room=0;
    char sign;

    scanf("%d",&n);
    getchar();

    while(n--)
    {
        sign=getchar();
        scanf("%d",&i);

        if(sign=='+')
        {
            if(id[i]==0)
                id[i]=1;

            stay++;

            if(stay>room)
                room=stay;

                    //    printf("\t%d\n",stay);

        }
        else if(sign=='-')
        {
            if(id[i]==1)
            {
                id[i]=0;
                stay--;
            if(stay>room)
                room=stay;

                  //      printf("\t%d\n",stay);

            }
            else if(id[i]==0)
            {
                id[i]=0;
                room++;

               /* if(stay>room)
                    room=stay;
                            printf("\t%d\n",stay);

                stay--;
                */
            }
        }



        getchar();

    }

    printf("%d\n",room);

    return 0;
}