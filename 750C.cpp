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

vector<int>dd;
vector<int>cc;

int maxy;

int BS(int lo , int hi ,int indi);
int check(int start,int indi);

int check(int start,int indi)
{
    int i;
    int crntDiv=2;
    int crntRating=start;

    if(crntRating>=1900)
    {
        crntDiv=1;
    }


    //printf("*******************\n");
    //printf("%d\n",crntRating);

    for(i=indi;i<dd.size();i++)
    {
        if(dd[i]!=crntDiv)
        {
            if(dd[i]==2)
            {
                //printf("-1\n");
                return -1;
            }

            else
            {
                //printf("1\n");
                return 1 ;
            }
        }

        crntRating += cc[i];

        if(crntRating>=1900)
        {
            crntDiv = 1 ;
        }

        else
        {
            crntDiv = 2 ;
        }

        //printf("%d %d\n",crntRating,crntDiv);
    }

    maxy = crntRating ;

    return 0 ;
}

int BS(int lo , int hi ,int indi)
{
    int mid ;
    int flaa;

    while(lo<hi)
    {
        mid = (lo+hi+1)/2;

        flaa = check(mid,indi);

        if(flaa==1) // rise
        {
            lo = mid + 1 ;
        }

        else if(flaa==-1) // reduce
        {
            hi = mid - 1 ;
        }

        else
        {
            lo = mid ;
        }
    }

    return lo ;
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int n,c,d;
    int test = 1 ;
    int div1fnd = 0 ;
    int div2fnd = 0 ;
    int desire;
    int i;

    //INPUT

    getInt(n)

    while(n--)
    {
        getInt(c)
        getInt(d)

        dd.pb(d);
        cc.pb(c);

        if(d==1)
        {
            div1fnd = 1 ;
        }

        if(d==2)
        {
            div2fnd = 1 ;
        }


    }


    if(div2fnd==0)
    {
        printf("Infinity\n");
    }

    else
    {
        desire = BS(-30000000,30000000,0);

        //DEBUG(desire)

        int temp = check(desire,0);

        if(temp==0)
        {
            printf("%d\n",maxy);
        }

        else
        {
            printf("Impossible\n");
        }
    }


    return 0;
}