/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


int main()
{
    int a1,b1,a2,b2,a3,b3,L,W,L1,W1,test;

    while(scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3)!=EOF)
    {
        if(a1>=b1)
        {
            L=a1;
            W=b1;
        }
        else
        {
            L=b1;
            W=a1;
        }

        test=0;

        L1=L;
        W1=W-b2;

        if(((L1>=a3&&W1>=b3)||(L1>=b3&&W1>=a3))&&(a2<=L))
            test=1;

        L1=L-a2;
        W1=W;

        if(((L1>=a3&&W1>=b3)||(L1>=b3&&W1>=a3))&&(b2<=W))
            test=1;

        L1=L;
        W1=W-a2;

        if(((L1>=a3&&W1>=b3)||(L1>=b3&&W1>=a3))&&(b2<=L))
            test=1;

        L1=L-b2;
        W1=W;

        if(((L1>=a3&&W1>=b3)||(L1>=b3&&W1>=a3))&&(a2<=W))
            test=1;

        if(test==1)
            printf("YES\n");
        else
            printf("NO\n");

    }


    return 0;

}
