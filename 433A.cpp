/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int n,w,odd,even,test,i;

    while(scanf("%d",&n)!=EOF)
    {
        odd=0;
        even=0;
        test=1;

        for(i=0;i<n;i++)
        {
            scanf("%d",&w);
            if(w==100)
                odd++;
            if(w=200)
                even++;
        }

        if(even%2==1)
        {
            if(odd>=2)
            {
                odd-=2;
                test=1;
            }
            else
                test=0;
        }

        if(odd%2==1)
            test=0;

        if(test)
            printf("YES\n");
        else
            printf("NO\n");


    }


    return 0;

}
