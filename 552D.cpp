#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,x[2005],y[2005],i,j,k,x1,x2,y1,y2,p;
    unsigned long long int ans;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d%d",&x[i],&y[i]);

        if(n<3)
            printf("0\n");

        else
        {
            ans=0;

            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    x1=x[i];
                    x2=x[j];
                    y1=y[i];
                    y2=y[j];



                        for(k=j+1;k<n;k++)
                        {
                            if(((y[k]-y1)*(x1-x2))!=((x[k]-x1)*(y1-y2)))
                                ans++;
                        }
                    }
            }









            printf("%llu\n",ans);


        }

    }


  return 0;
}

