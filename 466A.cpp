/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int a,b,n,m,min;

    while(scanf("%d%d%d%d",&n,&m,&a,&b)!=EOF)
    {
        if(b>m*a)
        {
            printf("%d\n",n*a);
        }
        else
        {
            min=(n/m)*b;

            if(n%m!=0)   min+=b;

            printf("%d\n",(  ((n/m)*b+(n%m)*a) <= min  ?  ((n/m)*b+(n%m)*a) : min))   ;
        }
    }

    return 0;
}

