#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int domino[200][2],n,i,test;
    long long int sum[2];

    while(scanf("%d",&n)!=EOF)
    {
        test=0;
        sum[0]=0;
        sum[1]=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&domino[i][0]);
            scanf("%d",&domino[i][1]);
            sum[0]+=domino[i][0];
            sum[1]+=domino[i][1];
            if(((domino[i][1]%2==1)&&(domino[i][0]%2==0))||((domino[i][0]%2==1)&&(domino[i][1]%2==0)))
                test=1;
        }

        if((sum[0]%2==0)&&(sum[1]%2==0)) printf("0\n");
        else if ((sum[0]%2==0)&&(sum[1]%2==1)) printf("-1\n");
        else if ((sum[1]%2==0)&&(sum[0]%2==1)) printf("-1\n");
        else
        {
            if(test==1)
                printf("1\n");
            else printf("-1\n");
        }

    }


    return 0;
}


