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

long long int memo[2][4]={0,};


int N;




int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    getInt(N);

    int i,j,k;

    memo[0][0]=1;

    for(i=1;i<=N;i++)
    {
        j = i&1;
        k = 1-j;

        memo[j][0] = ( memo[k][1] + memo[k][2] + memo[k][3] ) % MOD ;
        memo[j][1] = ( memo[k][0] + memo[k][2] + memo[k][3] ) % MOD ;
        memo[j][2] = ( memo[k][1] + memo[k][0] + memo[k][3] ) % MOD ;
        memo[j][3] = ( memo[k][1] + memo[k][2] + memo[k][0] ) % MOD ;
    }

    printf("%lld\n",memo[N&1][0]);


    return 0;
}