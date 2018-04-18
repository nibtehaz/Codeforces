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
#define INPUT freopen("carnival_coins.txt","r",stdin);
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

    int n;
    int pos;
    int t,i;
    char inp[20];
    int test = 1;
    int nedd;

    getInt(n)

    pos = 0 ;

    while(n--)
    {
        getInt(t)

        scanf("%s",inp);

        if(inp[0]=='N')
        {
            if(pos==0)
            {
                test = 0 ;
            }

            else
            {
                nedd = pos ;

                if(nedd<t)
                {
                    test = 0;
                }

                pos -= t ;
            }
        }

        else if(inp[0]=='S')
        {
            if(pos==20000)
            {
                test = 0 ;
            }

            else
            {
                nedd = 20000 - pos ;

                if(nedd<t)
                {
                    test = 0;
                }

                pos += t ;
            }
        }

        else
        {
            if(pos==0 || pos == 20000 )
            {
                test = 0 ;
            }
        }
    }

    if(pos!=0)
    {
        test  = 0 ;
    }

    if(test==1)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}