/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    long long int n,x[100005],min[100005],max[100005],a,b,i,MAX,MIN;


    while(scanf("%lld",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%lld",&x[i]);
        MAX=x[n-1]-x[0];
        MIN=0;


        for(i=0;i<n;i++)
        {
            a=MAX;
            b=MAX;

            if(i>0)
                a=abs(x[i]-x[i-1]);
            if(i<n-1)
                b=abs(x[i]-x[i+1]);

            if(a>=b)
                min[i]=b;
            else
                min[i]=a;


            a=abs(x[i]-x[0]);
            b=abs(x[i]-x[n-1]);

            if(a>=b)
                max[i]=a;
            else
                max[i]=b;

        }
        for(i=0;i<n;i++)
            printf("%lld %lld\n",min[i],max[i]);

    }

    return 0;
}