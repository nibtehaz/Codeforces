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


int N,LL[MAX],RR[MAX];

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    long long int L=0,R=0,maxx,tempL,tempR,temp;
    int i,ans=0;

    getInt(N)

    for(i=1;i<=N;i++)
    {
        getInt(LL[i]);
        getInt(RR[i]);

        L+=LL[i];
        R+=RR[i];
    }

    maxx=abs(L-R);

    for(i=1;i<=N;i++)
    {
        tempL=L-LL[i]+RR[i];
        tempR=R-RR[i]+LL[i];

        temp=abs(tempL-tempR);

        if(temp>maxx)
        {
            maxx=temp;
            ans=i;
        }
    }

    printf("%d\n",ans);

    return 0;
}