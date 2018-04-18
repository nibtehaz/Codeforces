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

    long long int nm;
    long long int i;
    int factor=0;
    long long int nm2;
    long long int factor2=0;

    getLong(nm)

    for(i=2;;i++)
    {
        if(i*i>nm)
        {
            break;
        }

        if(nm%i==0)
        {
            factor=1;
            break;
        }
    }

    nm2=nm-2;

    for(i=2;;i++)
    {
        if(i*i>nm2)
        {
            break;
        }

        if(nm2%i==0)
        {
            factor2=1;
            break;
        }
    }


    if(factor==0)
    {
        printf("1\n");
    }

    else
    {
        if(factor2==0)
        {
            printf("2\n");
        }

        else if(nm%2==0)
        {
            printf("2\n");
        }

        else if(nm%2==1)
        {
            printf("3\n");
        }
    }


    return 0;
}