/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,n,chest,biceps,back,a;

    while(scanf("%d",&n)!=EOF)
    {
        chest=0;
        biceps=0;
        back=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&a);

            if(i%3==0)
                chest+=a;
            else if(i%3==1)
                biceps+=a;
            else
                back+=a;
        }

        if(chest>biceps&&chest>back)
            printf("chest\n");
        else if(biceps>chest&&biceps>back)
            printf("biceps\n");
        else if(back>chest&&back>biceps)
            printf("back\n");
    }

    return 0;
}
