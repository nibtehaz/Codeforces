/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
   int n,i,cnt;
   char inp[100005];

   while(gets(inp))
   {
       cnt=0;
       n=strlen(inp);
       int alpha[26]={0,};

       for(i=0;i<n;i++)
       {
           if(inp[i]<='z'&&inp[i]>='a')
           {
               if(alpha[inp[i]-'a']==0)
               {
                   cnt++;
                   alpha[inp[i]-'a']=1;
               }
               if(cnt==26)
                break;
           }
       }
       printf("%d\n",cnt);
   }


    return 0;
}