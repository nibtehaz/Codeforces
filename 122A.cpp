/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int lucky[100]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int i,num,test;

    while(scanf("%d",&num)!=EOF)
    {
        test=0;

        for(i=0;i<14;i++)
        {
            if(num%lucky[i]==0)
            {
                test=1;
                break;
            }
        }
        if(test)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;
}


