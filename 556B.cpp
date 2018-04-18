/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int gear[2000],n,i,test;

    while(scanf("%d",&n)!=EOF)
    {
        test=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&gear[i]);
        }
        while(gear[0]!=0)
        {
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    gear[i]++;
                    if(gear[i]==n)
                        gear[i]=0;
                }
                else
                {
                    gear[i]--;
                    if(gear[i]<0)
                        gear[i]=n-1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(gear[i]!=i)
            {
                test=0;
                break;
            }
        }

        if(test==1)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}

