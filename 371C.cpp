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

long long int HaveB,HaveS,HaveC;
long long int PriceB,PriceS,PriceC;
long long int needB=0,needS=0,needC=0;
long long int r;


bool fn(long long int n);
long long int BS(long long int lo,long long int hi);

bool fn(long long int n)
{
    long long int wantB=n*needB;
    long long int wantS=n*needS;
    long long int wantC=n*needC;

    long long int cost=0;

    if(wantB>HaveB)
    {
        cost+=(wantB-HaveB)*PriceB;
    }

    if(wantS>HaveS)
    {
        cost+=(wantS-HaveS)*PriceS;
    }

    if(wantC>HaveC)
    {
        cost+=(wantC-HaveC)*PriceC;
    }

    //DEBUG(cost)

    return cost<=r;
}

long long int BS(long long int lo,long long int hi)
{
    long long int mid;

    while(lo<hi)
    {
        mid=(lo+hi+1)/2;

        //DEBUG(mid)

        if(fn(mid))
        {
            lo=mid;
        }

        else
        {
            hi=mid-1;
        }
    }

    return lo;
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int i;

    char inp[200];

    scanf("%s",inp);

    for(i=0;inp[i];i++)
    {
        if(inp[i]=='B')
        {
            needB++;
        }

        else if(inp[i]=='S')
        {
            needS++;
        }

        else
        {
            needC++;
        }
    }

    getLong(HaveB)
    getLong(HaveS)
    getLong(HaveC)

    getLong(PriceB)
    getLong(PriceS)
    getLong(PriceC)

    getLong(r)



    printf("%lld\n",BS(0,3000000000000) );

    return 0;
}
