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

struct sqrtSegment
{
    int L;
    int R;
    int openingSegment;
    int index;
};

int N,Q;
int arr[200005];
sqrtSegment queries[200005];
long long int ans[200005]={0,};
long long int queryAns=0;

int cnt[1000005]={0,};

bool isFirstSmaller(sqrtSegment a, sqrtSegment b);
void add_(int index);
void remove_(int index);



bool isFirstSmaller(sqrtSegment a, sqrtSegment b)
{
    return (a.openingSegment<b.openingSegment) || ( (a.openingSegment == b.openingSegment) && (a.R<b.R)) ;
}

void add_(int index)
{
    long long int a = cnt[arr[index]];
    long long int b = arr[index];

    queryAns -= a*a*b;

    cnt[arr[index]]++;

    a = cnt[arr[index]];
    b = arr[index];

    queryAns += a*a*b;

}

void remove_(int index)
{
    long long int a = cnt[arr[index]];
    long long int b = arr[index];

    queryAns -= a*a*b;

    cnt[arr[index]]--;

    a = cnt[arr[index]];
    b = arr[index];

    queryAns += a*a*b;
}

void MOsAlgorithm()
{
    int i;
    int neededL,neededR;
    int currentL=0;
    int currentR=N-1;

    // cover the full array at first

    for(i=0;i<N;i++)
    {
        add_(i);
    }


    // now Mo's Algorithm

    for(i=0;i<Q;i++)
    {
        neededL = queries[i].L;
        neededR = queries[i].R;

        while(currentL<neededL)
        {
            remove_(currentL);
            currentL++;
        }

        while(currentL>neededL)
        {
            currentL--;
            add_(currentL);
        }


        while(currentR<neededR)
        {
            currentR++;
            add_(currentR);
        }

        while(currentR>neededR)
        {
            remove_(currentR);
            currentR--;
        }

        ans[queries[i].index]=queryAns;

        //printf("%d %d %d\n",neededL,neededR,queryAns);
    }
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int i,j,a,b;
    int sqrtN;

    getInt(N)
    getInt(Q)

    sqrtN = sqrt((double)N);

    for(i=0;i<N;i++)
    {
        getInt(arr[i])
    }

    for(i=0;i<Q;i++)
    {
        getInt(a)
        getInt(b)

        queries[i].index = i;
        queries[i].L=SMALLER(a,b)-1;
        queries[i].R=BIGGER(a,b)-1;
        queries[i].openingSegment=queries[i].L/sqrtN;
    }

    /*for(i=0;i<Q;i++)
    {
        printf("%d %d %d %d %d\n",i,queries[i].index,queries[i].L,queries[i].R,queries[i].openingSegment);
    }*/

    sort(queries,queries+Q,isFirstSmaller);

    /*for(i=0;i<Q;i++)
    {
        printf("%d %d %d %d %d\n",i,queries[i].index,queries[i].L,queries[i].R,queries[i].openingSegment);
    }*/

    MOsAlgorithm();

    for(i=0;i<Q;i++)
    {
        printf("%lld\n",ans[i]);
    }


    return 0;
}
