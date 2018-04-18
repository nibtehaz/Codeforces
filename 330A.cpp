/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int main()
{
    int r,c,i,j,cake,eat;
    char mat[100][100];

    while(scanf("%d%d",&r,&c)!=EOF)
    {
        gets(mat[0]);
        for(i=0;i<r;i++)
        {
            gets(mat[i]);
        }
        cake=0;

        //row eat;

        for(i=0;i<r;i++)
        {
            eat=1;
            for(j=0;j<c;j++)
            {
                if(mat[i][j]=='S')
                {
                    eat=0;
                    break;
                }
            }

            if(eat==1)
            {
                for(j=0;j<c;j++)
                {
                    if(mat[i][j]=='.')
                    {
                        mat[i][j]='0';
                        cake++;
                    }
                }
            }
        }

        //column eat;
        for(j=0;j<c;j++)
        {
            eat=1;
            for(i=0;i<r;i++)
            {
                if(mat[i][j]=='S')
                {
                    eat=0;
                    break;
                }
            }

            if(eat==1)
            {
                for(i=0;i<r;i++)
                {
                    if(mat[i][j]=='.')
                    {
                        mat[i][j]='0';
                        cake++;
                    }
                }
            }
        }
        printf("%d\n",cake);
    }

    return 0;

}



