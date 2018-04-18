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


bool sieve[1000005] ={0,};


long long int BS(long long int need);

long long int BS(long long int need)
{
    long long int lo=1;
    long long int hi=1000000;
    long long int mid;

    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        //DEBUG(mid)

        if(mid*mid==need)
        {
            return mid;
        }


        else if(mid*mid>need)
        {
            hi=mid-1;
        }

        else
        {
            lo=mid+1;
        }
    }

    return -1;

}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int n,i,j;
    long long int a;

    sieve[1]=1;

    for(i=2;i<1002;i++)
    {
        if(sieve[i]==0)
        {
            for(j=i*i;j<1000005;j+=i)
            {
                sieve[j]=1;
            }
        }
    }

    getInt(n)

    while(n--)
    {
        getLong(a)

        j=(BS(a));
        //DEBUG(j)
        if(j!=-1 && sieve[j]==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
