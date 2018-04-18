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


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,weak,extra,min,max;

    while(scanf("%d",&n)!=EOF)
    {
        weak=n/7;
        extra=n%7;

        if(extra==0)
        {
            min=weak*2;
            max=weak*2;
        }

        else if(extra==1)
        {
            min=SMALLER(weak*2,n);
            max=SMALLER(weak*2+1,n);
        }

        else if(extra<=5)
        {
            min=SMALLER(weak*2,n);
            max=SMALLER(weak*2+2,n);
        }

        else if(extra==6)
        {
            min=SMALLER(weak*2+1,n);
            max=SMALLER(weak*2+2,n);
        }

        printf("%d %d\n",min,max );
    }
    return 0;
}