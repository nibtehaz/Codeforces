/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

int dr[10]={1,-1,0,0};
int dc[10]={0,0,1,-1};

struct point{
    int r;
    int c;
}sample,top;

int color[1005][1005]={0,};
vector <int> see;
queue <point> grays;

int main()
{
    int n,m,k;
    int region=0;

    int i,j,i2;
    int watch;

    char grid[1005][1005];

    getInt(n)
    getInt(m)
    getInt(k)

    for(i=0;i<n;i++)
        scanf("%s",grid[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(grid[i][j]=='*')
                continue;

            if(color[i][j]!=0)
                continue;

            else
            {
                region++;
                watch=0;

                sample.r=i;
                sample.c=j;

                grays.push(sample);

                color[sample.r][sample.c]=region;

                while(grays.size())
                {
                    top=grays.front();

                    for(i2=0;i2<4;i2++)
                    {
                        if( (top.r+dr[i2]>=n) || (top.c+dc[i2]>=m) || (top.r+dr[i2]<0) || (top.c+dc[i2]<0))
                            continue;
                        if(grid[top.r+dr[i2]][top.c+dc[i2]]=='*')
                            watch++;
                        else if(color[top.r+dr[i2]][top.c+dc[i2]]==0)
                        {
                            color[top.r+dr[i2]][top.c+dc[i2]]=region;


                           /* for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d",color[i][j]);
        printf("\n");
    }

    char ch=getchar();*/

                            sample.r=top.r+dr[i2];
                            sample.c=top.c+dc[i2];

                            grays.push(sample);

                        }
                    }

                    grays.pop();
                }

                see.pb(watch);
            }
        }
    }

    /*for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d",color[i][j]);
        printf("\n");
    }*/



    while(k--)
    {
        getInt(i)
        getInt(j)

        i--;
        j--;

        printf("%d\n",see[color[i][j]-1]);
    }


    return 0;
}


