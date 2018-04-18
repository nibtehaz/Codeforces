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

struct State
{
    int a;
    int b;
    int c;
    int i;
};

State states[100005];
int b[100005];

bool isFirstSmaller(State a,State b)
{
    return a.c<b.c;
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int N,L,R;
    int test=1;
    int maxPossible,minPossible,wantMin;
    int i,j;

    getInt(N)
    getInt(L)
    getInt(R)

    for(i=0;i<N;i++)
    {
        states[i].i=i;
        getInt(states[i].a)
    }

    for(i=0;i<N;i++)
    {
        getInt(states[i].c)
    }

    sort(states,states+N,isFirstSmaller);

    maxPossible=R-states[0].a;
    minPossible=L-states[0].a;

    states[0].b=L;
    b[states[0].i]=states[0].b;

    wantMin = minPossible+1;

    for(i=1;i<N;i++)
    {
        maxPossible=R-states[i].a;
        minPossible=L-states[i].a;

        if(wantMin>maxPossible)
        {
            test=0;
            goto done;
        }

        else if(wantMin<minPossible)
        {
            wantMin=minPossible;
        }

        states[i].b=wantMin+states[i].a;
        b[states[i].i]=states[i].b;

        wantMin++;
    }


    done :

    if(test==0)
    {
        printf("-1\n");
    }

    else
    {
        printf("%d",b[0]);

        for(i=1;i<N;i++)
        {
            printf(" %d",b[i]);
        }

        printf("\n");
    }


    return 0;
}
