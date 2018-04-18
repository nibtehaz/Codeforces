/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 200005



int main()
{
    int b[MAX],i,n,offset,temp;
    long long int cnt;
    
    while(scanf("%d",&n)!=EOF)
   {
        cnt=0;
        offset=0;

        for(i=0;i<n;i++)
            scanf("%d",&b[i]);

        for(i=0;i<n;i++)
        {
            cnt+=abs(offset-b[i]);
            offset=b[i];
        }

        printf("%lld\n",cnt);

   }

    return 0;

}

