/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int inp,n,m,i,j,f[100],min;

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<m;i++)
        {
            scanf("%d",&inp);

            for(j=i-1;j>=0;j--)
            {
                if(inp>=f[j])
                    break;
                else
                    f[j+1]=f[j];
            }

            f[j+1]=inp;
        }

        min=f[m-1];

        for(i=0;i<=(m-n);i++)
        {
            j=f[i+n-1]-f[i];
            if(j<min)
                min=j;
        }

        printf("%d\n",min);
    }

    return 0;
}

