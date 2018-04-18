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

    long long int arr[100005];
    int N,N1,N2;
    int i;
    long long int sum1=0,sum2=0;

    getInt(N)
    getInt(N1)
    getInt(N2)

    if(N1>N2)
    {
        N1=N1^N2;
        N2=N1^N2;
        N1=N1^N2;
    }

    for(i=0;i<N;i++)
    {
        getLong(arr[i])
    }

    sort(arr,arr+N);

    sum1=0;
    sum2=0;

    i=N-1;

    int j=N1;

    for(;i>=0;i--)
    {
        if(j==0)
        {
            break;
        }

        sum1+=arr[i];
        j--;
    }

    j=N2;

    for(;i>=0;i--)
    {
        if(j==0)
        {
            break;
        }

        sum2+=arr[i];
        j--;
    }

    printf("%.8f\n",((double)sum1/(double)N1) + ((double)sum2/(double)N2)  );

    return 0;
}