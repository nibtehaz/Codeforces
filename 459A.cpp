/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int x1,x2,y1,y2,x3,x4,y3,y4,a;

    while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)!=EOF)
    {

        if(x2<x1)
        {
            x1=x1^x2;
            x2=x1^x2;
            x1=x1^x2;

            y1=y1^y2;
            y2=y1^y2;
            y1=y1^y2;
        }

        if(x2==x1&&y1>y2)
        {
            y1=y1^y2;
            y2=y1^y2;
            y1=y1^y2;
        }


        if(x1==x2)
        {
            a=y2-y1;

            x3=x1+a;
            x4=x3;
            y3=y1;
            y4=y2;


                printf("%d %d %d %d\n",x3,y3,x4,y4);
        }

        else if(y1==y2)
        {
            a=x2-x1;

            x3=x1;
            x4=x2;
            y3=y1+a;
            y4=y3;


                printf("%d %d %d %d\n",x3,y3,x4,y4);
        }

        else
        {
            if(abs(x2-x1)!=abs(y1-y2))
                printf("-1\n");

            else
            {
                x3=x1;
                y3=y2;
                x4=x2;
                y4=y1;

                printf("%d %d %d %d\n",x3,y3,x4,y4);
            }
        }
    }

    return 0;
}

