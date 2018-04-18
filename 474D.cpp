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
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back


int main()
{
    int T,K;
    int a,b,i,j;

    long long int dp[MAX],sum[MAX];

    getInt(T)
    getInt(K)

    dp[0]=1;
    sum[0]=0;
    dp[1]=1;
    sum[1]=1;

    for(i=2;i<K;i++)
    {
        dp[i] = 1;
        sum[i] = ( sum[i-1] + dp[i] )%MOD;
    }

    for(i=K;i<MAX;i++)
    {
        dp[i] = (dp[i-1]+dp[i-K])%MOD;
        sum[i] = ( sum[i-1] + dp[i])%MOD;
    }

//for(i=0;i<5;i++)
  //  DEBUG(dp[i]);

   // for(i=0;i<5;i++)
    //DEBUG(sum[i]);
    while(T--)
    {
        getInt(a);
        getInt(b);
//DEBUG(sum[b])
//DEBUG(sum[a-1])
        printf("%lld\n",(sum[b]-sum[a-1]+MOD)%MOD);
    }




    return 0;
}
