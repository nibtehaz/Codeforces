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
    int x,bit;

    while(scanf("%d",&x)!=EOF)
    {
        bit=0;

        for(;;)
        {
            if(x%2==1)
                bit++;
            x/=2;
            if(x==0)
                break;
        }
        printf("%d\n",bit);
    }



    return 0;
}

