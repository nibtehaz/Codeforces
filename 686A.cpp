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

#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define FPEQUAL(FP1,FP2) fabs(FP1-FP2)<=EPS
#define FPLT(FP1,FP2) (FP1-FP2)<=EPS
#define FPGT(FP1,FP2) (FP1-FP2)>=EPS
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back


#define INF 1000000000

long long int memo[262147][19];
long long int a[20]= {0,};
long long int rule[20][20]= {0,};


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    long long int tot,child=0,d;
    int n,i;
    char inp[2000];


    getInt(n)
    getLong(tot)

    while(n--)
    {
        scanf("%s",inp);

        if(inp[0]=='+')
        {
            getLong(d)
            tot+=d;
        }

        else
        {
            getLong(d)

            if(d<=tot)
            {
                tot-=d;
            }

            else
            {
                child++;
            }
        }
    }

    printf("%lld %lld\n",tot,child );

    return 0;
}