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
#define floatingEqual(a,b) (fabs(a-b)<=EPS)
#define floatingLess(a,b) ((b-a)>=EPS)
#define floatingGreater(a,b) ((a-b)>=EPS)

#define INF 1000000000



int selfFinance[100005];
int price[100005];
int N,M,A;

long long int compute(int total);


long long int compute(int total)
{
    long long int totalCost=0;
    long long int budget=A;
    int i,j;

    j = N - 1 ;

    for(i=total-1;i>=0;i--,j--)
    {
        if(selfFinance[j]>=price[i])
        {
            totalCost+=price[i];
        }

        else
        {
            budget -= price[i]-selfFinance[j];
            totalCost += selfFinance[j];
        }
    }

    if(budget<0)
    {
        return -1;
    }

    else
    {
        return BIGGER(totalCost-budget,0);
    }

}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int i,j;

    getInt(N)
    getInt(M)
    getInt(A)

    for(i=0;i<N;i++)
    {
        getInt(selfFinance[i])
    }

    for(i=0;i<M;i++)
    {
        getInt(price[i])
    }

    sort(selfFinance,selfFinance+N);
    sort(price,price+M);

    int lo=0;
    int hi= SMALLER(N,M);
    int mid;

    long long int extra;

    while(lo<hi)
    {
        mid=(lo+hi+1)/2;

        extra=compute(mid);

        if(extra==-1)
        {
            hi=mid-1;
        }

        else
        {
            lo=mid;
        }
    }

    extra=compute(lo);

    if(extra==-1)
    {
        printf("0 0\n");
    }

    else
    {
        printf("%d %lld\n",lo,extra);
    }


    return 0;
}
