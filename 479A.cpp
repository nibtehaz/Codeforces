/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int a,b,c,d,max;

    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        max=a*b*c;

        d=a+b+c;
        if(d>max)
            max=d;

        d=(a+b)*c;
        if(d>max)
            max=d;

        d=a*(b+c);
        if(d>max)
            max=d;
            
        d=a+(b*c);
        if(d>max)
            max=d;
        
        d=(a*b)+c;
        if(d>max)
            max=d;
        


        printf("%d\n",max);

    }

    return 0;
}

