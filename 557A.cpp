/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
   int n,a,b,c,maxa,maxb,maxc,mina,minb,minc;

   while(scanf("%d",&n)!=EOF)
   {
       scanf("%d%d",&mina,&maxa);
       a=mina;
       maxa-=mina;
       n-=mina;
       scanf("%d%d",&minb,&maxb);
       b=minb;
       maxb-=minb;
       n-=minb;
       scanf("%d%d",&minc,&maxc);
       c=minc;
       maxc-=minc;
       n-=minc;

       if(n>maxa)
       {
           n-=maxa;
           a+=maxa;
       }
       else
       {
           a+=n;
           n=0;
       }

       if(n>maxb)
       {
           n-=maxb;
           b+=maxb;
       }
       else
       {
           b+=n;
           n=0;
       }

       if(n>maxc)
       {
           n-=maxc;
           c+=maxc;
       }
       else
       {
           c+=n;
           n=0;
       }

       printf("%d %d %d\n",a,b,c);


   }


    return 0;
}
