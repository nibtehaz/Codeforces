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
#define MAX 300005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back



int main()
{
    int N,K;
    int inp[MAX];
    int cumul[MAX][2][3];
    int i,j,cnt;
    int max=0,len=0,L,R,maxL,maxR;

    while(scanf("%d%d",&N,&K)!=EOF)
    {
        for(i=0;i<N;i++)
        {
            getInt(inp[i])
        }

        len=0;
        j=0;

        L=0;
        for(i=0;i<N;i++)
        {
            if(j==K)
                break;

            if(inp[i]==0)
            {
                j++;
                len++;
            }

            else
            {
                len++;
            }
        }

        for(;i<N;i++)
        {
            if(inp[i]==1)
                len++;
            else
                break;
        }

        R=i-1;

        len=R-L+1;
        max=len;
        maxL=L;
        maxR=R;

        for(i=R+1;i<N;)
        {
            while(1)
            {
                if(L>=N)
                    break;

                if(inp[L]==1)
                {
                    L++;
                }

                else
                {
                    L++;
                    break;
                }
            }

            cnt=0;

            while(1)
            {
                if(i>=N || R>=N)
                    break;

                if(inp[i]==1)
                {
                    R++;
                    i++;
                }

                else
                {
                    R++;
                    i++;

                    for(;i<N;i++)
                    {
                        if(inp[i]==1)
                            R++;
                        else
                        {
                            i--;
                            break;
                        }
                    }

                    break;
                }
            }

            i++;

            //DEBUG(L)
            //printf("ebar %d\n",R);

            if(R-L+1 > max)
            {
                max= R - L + 1;
                maxL=L;
                maxR=R;
            }
        }

        max=0;
        for(i=maxL;i<=maxR;i++)
        {
            inp[i]=1;
            max++;
        }

        //DEBUG(maxL)
        //DEBUG(maxR)

        printf("%d\n",max);

        printf("%d",inp[0]);

        for(i=1;i<N;i++)
            printf(" %d",inp[i]);

        printf("\n");
    }


    return 0;
}