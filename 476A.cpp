/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int n,m,even,min;

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        even=n/2;

        if(n%2) min=1;
        else min=0;

        min+=even;

        while(even--)
        {
            if(min%m==0)
                break;
            else
            {
                min++;
            }
        }

        if(min%m==0)
            printf("%d\n",min);
        else
            printf("-1\n");

    }


    return 0;

}


