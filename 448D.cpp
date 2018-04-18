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

long long int N,M,K;

long long int cnt(long long int num);
long long int BS(long long int lo, long long int hi);

long long int cnt(long long int num)
{
    long long int ans = 0 ;
    int i;

    for(i=1;i<=N;i++)
    {
        ans += SMALLER((num-1)/i,M);
    }

    return ans;
}

long long int BS(long long int lo, long long int hi)
{
    long long int mid,temp;

    //DEBUG(lo)
    //DEBUG(hi)

    while(lo<hi)
    {
        mid = (lo+hi+1)/2;

        temp = cnt(mid);

        //printf("mid = %lld cnt = %lld\n",mid,temp);

        if(temp<K)
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

    getLong(N)
    getLong(M)
    getLong(K)

    //K=M*N-K+1;
    printf("%lld\n",BS(1,M*N));


    return 0;
}