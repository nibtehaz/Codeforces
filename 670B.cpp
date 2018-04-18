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

long long int sum(long long int n);

long long int sum(long long int n)
{
    return (n*(n+1))/2;
}


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    long long int N,K;

    int arrayy[MAX];
    long long int i;
    while(scanf("%lld%lld",&N,&K)!=EOF)
    {
        for(i=0;i<N;i++)
            getInt(arrayy[i])

    long long int m;

    for(i=1;;i++)
    {
        m=sum(i);

        if(m>=K)
            break;
    }

    long long int m2=sum(i)-K;

    //DEBUG(m2)
    //DEBUG(i)

    printf("%d\n",arrayy[i-m2-1]);

    }
    return 0;
}