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
    int i,j,cnt,test;
    char mat[20][20];

    while(gets(mat[0]))
    {
        gets(mat[1]);
        gets(mat[2]);
        gets(mat[3]);

        cnt=0;
        test=0;

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cnt=0;

                if(mat[i][j]=='#')
                    cnt++;
                if(mat[i][j+1]=='#')
                    cnt++;
                if(mat[i+1][j]=='#')
                    cnt++;
                if(mat[i+1][j+1]=='#')
                    cnt++;

                if(cnt>=3)
                    {
                        test=1;
                        goto ans;

                    }

                cnt=0;

                if(mat[i][j]=='.')
                    cnt++;
                if(mat[i][j+1]=='.')
                    cnt++;
                if(mat[i+1][j]=='.')
                    cnt++;
                if(mat[i+1][j+1]=='.')
                    cnt++;

                if(cnt>=3)
                    {
                        test=1;
                        goto ans;

                    }
            }
        }

        ans:
            if(test==1)
                printf("YES\n");
            else
                printf("NO\n");

    }

    return 0;

}



