#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int m,n,q,x,y,i,j,k,sum,max,grid[600][600],row[600];

    while(scanf("%d%d%d",&m,&n,&q)!=EOF)
    {
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&grid[i][j]);

            for(i=0;i<m;i++)
            {
                sum=0;
max=0;
                for(j=0;j<n;j++)
                {
                    if(grid[i][j]==0) sum=0;
                    else sum++;
                    if(sum>max) max=sum;
                }
                row[i]=max;
            }

        while(q--)
        {
            scanf("%d%d",&x,&y);

            if(grid[x-1][y-1]==0)
                grid[x-1][y-1]=1;

            else
                grid[x-1][y-1]=0;

            i=x-1;
            sum=0;
max=0;
            for(j=0;j<n;j++)
                {
                    if(grid[i][j]==0) sum=0;
                    else sum++;
                    if(sum>max) max=sum;
                }
                row[i]=max;

            max=row[0];

            for(i=0;i<m;i++)
            {
                if(row[i]>max)
                    max=row[i];

            }

            printf("%d\n",max);

        }
    }


    return 0;
}