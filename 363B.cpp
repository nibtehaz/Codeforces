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

    int n,k,pos,i,h[150005];
    long long int minn,temp;

    getInt(n)
    getLong(k)

    for(i=0;i<n;i++)
    {
        getInt(h[i])
    }

    temp=0;

    for(i=0;i<k;i++)
    {
        temp+=h[i];
    }

    minn=temp;
    pos=0;

    for(i=1;i<n;i++)
    {
        if((i+k-1)>=n)
        {
            break;
        }

        temp+=h[i+k-1]-h[i-1];

        if(temp<minn)
        {
            minn=temp;
            pos=i;
        }
    }

    printf("%d\n",pos+1 );


    return 0;
}
