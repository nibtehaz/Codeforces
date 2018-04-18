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

void permute2(int a,int b);
void permute3(int a,int b,int c);
void chk();

int dice[4][7];

int found[10000]={0,};

void chk()
{
    int i;

    for(i=1;;i++)
    {
        if(found[i]==0)
        {
            printf("%d\n",i-1);
            return;
        }
    }

}

void permute2(int a,int b)
{
    int i,j;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            found[dice[a][i]*10+dice[b][j]]=1;
        }
    }
}

void permute3(int a,int b,int c)
{
    int i,j,k;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            for(k=0;k<6;k++)
            {
                found[dice[a][i]*100+dice[b][j]*10+dice[c][k]]=1;
            }
        }
    }
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma 

    int n;
    int i,inp;

    getInt(n)

    if(n==1)
    {
        for(i=0;i<6;i++)
        {
            getInt(inp)
            found[inp]=1;
        }
    }

    else if(n==2)
    {
        for(i=0;i<6;i++)
        {
            getInt(inp)
            found[inp]=1;
            dice[0][i]=inp;
        }

        for(i=0;i<6;i++)
        {
            getInt(inp)
            found[inp]=1;
            dice[1][i]=inp;
        }

        permute2(0,1);
        permute2(1,0);
    }

    else if(n==3)
    {
        for(i=0;i<6;i++)
        {
            getInt(inp)
            found[inp]=1;
            dice[0][i]=inp;
        }

        for(i=0;i<6;i++)
        {
            getInt(inp)
            found[inp]=1;
            dice[1][i]=inp;
        }

        for(i=0;i<6;i++)
        {
            getInt(inp)
            found[inp]=1;
            dice[2][i]=inp;
        }

        permute2(0,1);
        permute2(1,0);

        permute2(1,2);
        permute2(2,1);

        permute2(2,0);
        permute2(0,2);

        permute3(0,1,2);
        permute3(0,2,1);
        permute3(1,0,2);
        permute3(1,2,0);
        permute3(2,0,1);
        permute3(2,1,0);
    }


    chk();


    return 0;

}
