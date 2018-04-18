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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("B-small-attempt0.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

#define INF 1000000000

int n,k;
int a[MAX],b[MAX];

int possible(long long int want);
long long int BS(long long int lo,long long int hi);

int possible(long long int want)
{
    long long int baki=k;
    int i;

    for(i=0;i<n;i++)
    {
        if(want*a[i]<=b[i])
            continue;
        else
        {
            baki-=want*a[i]-b[i];

            if(baki<0)
                return 0;
        }
    }

    return 1;
}

long long int BS(long long int lo,long long int hi)
{
    long long int mid;

    while(lo<hi)
    {
        mid=(lo+hi+1)/2;

        if(possible(mid)==1)
        {
            lo=mid;
        }

        else
        {
            hi=mid-1;
        }
    }



    return lo;
}


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int i;

    getInt(n)
    getInt(k)

    for(i=0;i<n;i++)
        getInt(a[i])

    for(i=0;i<n;i++)
        getInt(b[i])

    printf("%lld\n",BS(0,2000000005));

    return 0;
}