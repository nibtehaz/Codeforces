/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
   char inp[2000];
   int a,b,c,d,ans;

   while(scanf("%s",inp)!=EOF)
   {
       a=strlen(inp)-2;
       scanf("%s",inp);
       b=strlen(inp)-2;
       scanf("%s",inp);
       c=strlen(inp)-2;
       scanf("%s",inp);
       d=strlen(inp)-2;

       ans=0;

        if(((a>=2*b)&&(a>=2*c)&&(a>=2*d))||((2*a<=b)&&(2*a<=d)&&(2*a<=c)))
        ans=1;

        if(((b>=2*a)&&(b>=2*c)&&(b>=2*d))||((2*b<=a)&&(2*b<=d)&&(2*b<=c)))
        {
            if(ans==0)
                ans=2;
            else
                ans=-1;
        }

        if(((c>=2*a)&&(c>=2*b)&&(c>=2*d))||((2*c<=a)&&(2*c<=d)&&(2*c<=b)))
        {
            if(ans==0)
                ans=3;
            else
                ans=-1;
        }

        if(((d>=2*a)&&(d>=2*c)&&(d>=2*b))||((2*d<=a)&&(2*d<=b)&&(2*d<=c)))
        {
            if(ans==0)
                ans=4;
            else
                ans=-1;
        }

        if(ans==-1||ans==0)
            ans=3;

        printf("%c\n",'A'+ans-1);


   }

    return 0;

}


