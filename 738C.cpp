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

long long int N,K,S,T;
long long int G[200005];
long long int C[200005],V[200005];
vector<long long int>distancee;

bool checker(long long int capacity);
long long int BS(long long int lo , long long int hi);

bool checker(long long int capacity)
{
    int i,j,k;
    long long int timee=0;
    long long int necessary,luxury;

    for(i=0;i<distancee.size();i++)
    {
        if(distancee[i]>capacity)
        {
            return false ;
        }

        else
        {
            necessary = distancee[i];
            luxury = capacity - necessary ;

            if(luxury>=0)
            {
                if(luxury>=necessary)
                {
                    timee += necessary;
                }

                else
                {
                    timee += luxury + (necessary-luxury)*2;
                }
            }

            else
            {
                timee+=necessary*2;
            }
        }
    }
    //printf("%lld %lld\n",timee,capacity);
    if(timee<=T)
    {
        return true;
    }

    return false;
}

long long int BS(long long int lo , long long int hi)
{
    long long int mid;

    if(T<S)
    {
        return -1;
    }

    while(lo<hi)
    {
        mid=(lo+hi)/2;

        if(checker(mid))
        {
            hi=mid;
        }

        else
        {
            lo=mid+1;
        }
    }

    return (lo+hi)/2;
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    long long int i,j,k;
    long long int last,maxy=0;
    long long int minCap,minCost=-1;

    //INPUT

    getLong(N)
    getLong(K)
    getLong(S)
    getLong(T)


    //DEBUG(N)
    //DEBUG(K)
    //DEBUG(S)
    //DEBUG(T)

    for(i=0;i<N;i++)
    {
        getLong(C[i])
        getLong(V[i])
    }

    /*for(i=0;i<N;i++)
    {
        DEBUG(C[i])
        DEBUG(V[i])
    }*/

    for(i=0;i<K;i++)
    {
        getLong(G[i])
    }

    /*for(i=0;i<K;i++)
    {
        printf("%lld ",G[i]);
    }
    printf("\n");*/

    sort(G,G+K);

    /*for(i=0;i<K;i++)
    {
        printf("%lld ",G[i]);
    }
    printf("\n");*/

    last=0;

    for(i=0;i<K;i++)
    {
        distancee.pb(G[i]-last);
        last=G[i];
        maxy=BIGGER(maxy,distancee[distancee.size()-1]);
    }

    distancee.pb(S-last);
    maxy=BIGGER(maxy,distancee[distancee.size()-1]);

    /*for(i=0;i<distancee.size();i++)
    {
        printf("%lld ",distancee[i]);
    }
    printf("\n");*/

    minCap = BS(0,2*maxy+5);

    //DEBUG(minCap)

    if(minCap!=-1)
    {
        for(i=0;i<N;i++)
        {
            if(minCap<=V[i])
            {
                if(minCost==-1)
                {
                    minCost=C[i];
                }

                else
                {
                    minCost=SMALLER(C[i],minCost);
                }
            }
        }

    }


    printf("%lld\n",minCost);

    return 0;
}
