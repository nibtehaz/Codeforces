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

int cumArrays[12][101][101]={0,};

void makeCumArrays(int c)
{
    int i,j,k;

    for(k=0;k<=c;k++)
    {
        for(i=1;i<=100;i++)
        {
            for(j=1;j<=100;j++)
            {
                cumArrays[k][i][j] += cumArrays[k][i-1][j] + cumArrays[k][i][j-1] - cumArrays[k][i-1][j-1] ;
            }
        }
    }
}

int query(int k,int i1,int j1,int i2,int j2)
{
    return cumArrays[k][i2][j2] - cumArrays[k][i1-1][j2] - cumArrays[k][i2][j1-1] + cumArrays[k][i1-1][j1-1] ;
}

int main()
{
    // Bismillahir Rahmanir Rahim 
    // Rabbi Zidni Ilma 

    //INPUT

    int N,Q,C;
    int xi,yi,si;
    int i,cpp;
    int t,x1,y1,x2,y2;
    long long int ans;

    getInt(N)
    getInt(Q)
    getInt(C)

    cpp = C + 1 ;

    for(i=0;i<N;i++)
    {
        getInt(xi)
        getInt(yi)
        getInt(si)

        cumArrays[si][xi][yi] += 1 ;
    }

    makeCumArrays(C);

    /*for(int k=0;k<=10;k++)
    {
        printf("**************************\n%d\n***************\n",k);
        for(int i=0;i<=5;i++)
        {
            for(int j=0;j<=5;j++)
            {
                printf(" %d ", cumArrays[k][i][j]);
            }
            printf("\n");
        }
    }*/

    while(Q--)
    {
        getInt(t)

        getInt(x1)
        getInt(y1)

        getInt(x2)
        getInt(y2)


        ans = 0;

        for(i=0;i<=C;i++)
        {
            ans += (long long int) (query(i,x1,y1,x2,y2)*((t)%cpp));
            //printf("%d %d\n",i,query(i,x1,y1,x2,y2));

            t++; // ;) 
        }

        printf("%lld\n",ans);
    }


    return 0;

}
