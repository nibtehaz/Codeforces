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


int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    char inp[1000];
    int i,minn=0,nxt,lst,N,tst=0;

    scanf("%s",inp);
    N=strlen(inp);

    for(i=0;i<N;i++)
    {
        if(inp[i]=='A'||inp[i]=='E'||inp[i]=='I'||inp[i]=='O'||inp[i]=='U'||inp[i]=='Y')
        {
            tst=1;
            break;
        }
    }

    lst=i;
    minn=i+1;

    i++;

    for(;i<N;i++)
    {
        if(inp[i]=='A'||inp[i]=='E'||inp[i]=='I'||inp[i]=='O'||inp[i]=='U'||inp[i]=='Y')
        {
            tst=1;
            minn=BIGGER(i-lst,minn);
            lst=i;
        }
    }


    minn=BIGGER(i-lst,minn);

    //DEBUG(i-lst)
    //DEBUG(minn);
    //DEBUG(strlen(inp))

    if(tst==0)
    {
        printf("%d\n",N+1);

    }

    else
    {
        printf("%d\n",minn);

    }


    return 0;
}