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

int low[70]={0,};
int hii[70]={0,};

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    long long int lo,hi,temp;
    unsigned long long int chk=1;
    long long int i,j;

    getLong(lo)
    getLong(hi)

    for(j=0;j<70;j++)
    {
        low[j]=lo%2;
        hii[j]=hi%2;
        lo/=2;
        hi/=2;
    }

    temp=0;

    /*for(i=0;i<70;i++)
        printf("%d",low[i]);
    printf("\n");

    for(i=0;i<70;i++)
        printf("%d",hii[i]);
    printf("\n");*/

    for(i=69;i>=0;i--)
    {
        if((low[i]==0)&&(hii[i]==1))
        {
            //DEBUG(i)

            for(j=0;j<=i;j++)
                temp=temp*2+1;

            break;
        }

        chk/=2;
    }

    printf("%lld\n",temp);



    return 0;
}
