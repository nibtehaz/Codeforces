/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int n,S,x[3005],y[3005],m[3005],r[3005],i,j,rans,add,need;

    while(scanf("%d%d",&n,&S)!=EOF)
    {
        rans=-1;
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&x[i],&y[i],&m[i]);
            r[i]=x[i]*x[i]+y[i]*y[i];
        }

        need=1000000-S;

        for(i=0;i<n;i++)
        {
            add=0;

            for(j=0;j<n;j++)
            {
                if(r[j]<=r[i])
                    add+=m[j];
            }



            if(add>=need)
            {
                if(rans<0)
                {
                    rans=r[i];
                }

                if(r[i]<rans)
                    rans=r[i];
            }
        }

        if(rans>0) printf("%.7lf\n",sqrt(rans));
        else printf("-1\n");

    }

    return 0;

}
