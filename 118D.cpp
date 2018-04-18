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
#define INPUT freopen("myInput.in","r",stdin);
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
#define setBit(a,n) a|=1<<n;
#define resetBit(a,n) a&=~(1<<n);
#define checkBit(a,n) ((a&(1<<n))!=0)
#define toggleBit(a,n) a^=1<<n;

#define INF 1000000000

int n1,n2,k1,k2;

int memo[105][105][12][2];
                            // state 1 : n1 left
                            // state 2 : n2 left
                            // state 3 : cumulative
                            // state 4 : type 0 -> n1 1 -> n2

int dp(int n1Left , int n2Left , int Cumulative , int type);

int dp(int n1Left , int n2Left , int Cumulative , int type)
{
    if(n1Left+n2Left==0)
    {
        return 1;
    }

    if(memo[n1Left][n2Left][Cumulative][type]!=-1)
    {
        return memo[n1Left][n2Left][Cumulative][type];
    }

    int p1=0,p2=0,p3=0,p4=0;

    // take n1

    if(type==0)
    {
        if((Cumulative<k1)&&(n1Left>0))
        {
            p1=dp(n1Left-1,n2Left,Cumulative+1,0);
        }
    }

    else
    {
        if((n1Left>0))
        {
            p2=dp(n1Left-1,n2Left,1,0);
        }
    }

    // take n2

    if(type==1)
    {
        if((Cumulative<k2)&&(n2Left>0))
        {
            p3=dp(n1Left,n2Left-1,Cumulative+1,1);
        }
    }

    else
    {
        if((n2Left>0))
        {
            p4=dp(n1Left,n2Left-1,1,1);
        }
    }

    memo[n1Left][n2Left][Cumulative][type]=(((p1+p2)%100000000)+((p3+p4)%100000000))%100000000;

    return memo[n1Left][n2Left][Cumulative][type];

}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    memset(memo,-1,sizeof(memo));

    getInt(n1)
    getInt(n2)
    getInt(k1)
    getInt(k2)

    printf("%d\n",dp(n1,n2,0,0));

    return 0;
}
