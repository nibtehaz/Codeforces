/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int n,l=0,r,c,t,crime,i;
    long long int ans=0;

    scanf("%d%d%d",&n,&t,&c);

    for(i=0;i<n;i++)
    {
        scanf("%d",&crime);

        if(crime>t)
        {
            r=i-1;


            if(r-l+1>=c)
            {
                ans+=(r-l-c+2);
            }
            l=i+1;
        }
    }

    r=n-1;

    if(r-l+1>=c)
    {
        ans+=(r-l-c+2);
    }

    printf("%lld\n",ans);

    return 0;

}
