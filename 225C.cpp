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
#include <map>
#include <list>
#include <stack>
#include <set>
#include <deque>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("in.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back
#define setBit(a,n) a|(1<<n)
#define setBitStatement(a,n) a|=1<<n;
#define resetBit(a,n) a&=~(1<<n);
#define checkBit(a,n) ((a&(1<<n))!=0)
#define toggleBit(a,n) a^=1<<n;
#define doubleingEqual(a,b) (fabs(a-b)<=EPS)
#define doubleingLess(a,b) ((b-a)>=EPS)
#define doubleingGreater(a,b) ((a-b)>=EPS)

#define INF 1000000000

int N,M,X,Y;
int col[1005][1005];
char inp[1005];
int to[2][1005];

long long int memo[1005][1005][2];
                                    // state 1 : current index
                                    // state 2 : cumulative
                                    // state 3 : color

long long int dp(int indi, int cum, int colr);

long long int dp(int indi, int cum, int colr)
{
    if(indi==M)
    {
        int cum2 = cum - 1;
        if((X<=cum2 && cum2<=Y)||cum2==0)
        {
            return 0;
        }

        else
        {
            return INF;
        }
    }

    if(memo[indi][cum][colr]!=-1)
    {
        return memo[indi][cum][colr];
    }

    int offset = to[colr][indi];

    long long int tmp1 = INF;
    long long int tmp2 = INF;

    // change color
    if(cum>=X)
    {
        tmp2 = offset + dp(indi+1,1,1-colr);
    }

    // same color
    if(cum<Y)
    {
        tmp1 = offset + dp(indi+1,cum+1,colr);
    }

    memo[indi][cum][colr] = SMALLER(tmp2,tmp1);

    return memo[indi][cum][colr];

}



int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma 

    //INPUT

    int i,j;
    int noOf1s;

    getInt(N)
    getInt(M)
    getInt(X)
    getInt(Y)

    for(i=0;i<N;i++)
    {
        scanf("%s",inp);

        for(j=0;j<M;j++)
        {
            if(inp[j]=='#')
            {
                col[i][j] = 0;
            }

            else
            {
                col[i][j] = 1;
            }
        }
    }

    /*for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf(" %d ",col[i][j]);
        }
        printf("\n");
    }*/

    for(j=0;j<M;j++)
    {
        noOf1s = 0;

        for(i=0;i<N;i++)
        {
            noOf1s += col[i][j];
        }

        to[0][j] = noOf1s;
        to[1][j] = N-noOf1s;
    }

    /*DEBUG("Change to 0")
    for(i=0;i<M;i++)
    {
        printf(" %d ",to[0][i]);
    }

    DEBUG("\nChange to 1")
    for(i=0;i<M;i++)
    {
        printf(" %d ",to[1][i]);
    }
    DEBUG("")*/


    memset(memo,-1,sizeof(memo));

    printf("%lld\n",SMALLER(dp(0,1,0),dp(0,1,1)));
  
    return 0;
}
