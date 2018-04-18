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

int L,A,B,C;

int memo[4005];

int dp(int len);

int dp(int len)
{
    if(len==0)
    {
        return 0;
    }

    if(len<0)
    {
        return -2;
    }

    if(memo[len]!=-1)
    {
        return memo[len];
    }

    int choice1 = dp(len-A);
    int choice2 = dp(len-B);
    int choice3 = dp(len-C);

    int maxx = BIGGER(choice1,BIGGER(choice2,choice3));

    if(maxx==-2)
    {
        memo[len]=-2;
        return -2;
    }

    else
    {
        memo[len]=maxx+1;
        return memo[len];
    }
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    memset(memo,-1,sizeof(memo));

    getInt(L)
    getInt(A)
    getInt(B)
    getInt(C)

    printf("%d\n",dp(L));

    return 0;
}
