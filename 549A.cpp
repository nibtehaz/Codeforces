#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int n,m,cnt,i,j,f,a,c,e;
    char grid[100][100];

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%s",grid[i]);

        cnt=0;

        for(i=0;i<n-1;i++)
            for(j=0;j<m-1;j++)
            {
                f=0;
                a=0;
                c=0;
                e=0;

                if((grid[i][j]=='f')||(grid[i][j+1]=='f')||(grid[i+1][j]=='f')||(grid[i+1][j+1]=='f'))
                f++;
                if((grid[i][j]=='a')||(grid[i][j+1]=='a')||(grid[i+1][j]=='a')||(grid[i+1][j+1]=='a'))
                a++;
                if((grid[i][j]=='c')||(grid[i][j+1]=='c')||(grid[i+1][j]=='c')||(grid[i+1][j+1]=='c'))
                c++;
                if((grid[i][j]=='e')||(grid[i][j+1]=='e')||(grid[i+1][j]=='e')||(grid[i+1][j+1]=='e'))
                e++;

                if(f==1&&a==1&&c==1&&e==1)
                cnt++;
            }

        printf("%d\n",cnt);



    }

    return 0;
}