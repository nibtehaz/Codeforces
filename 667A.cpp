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
#define INPUT freopen("input.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 200005
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

    int d,h,v,e;
    double time,rate;

   // while(1)
    {
        getInt(d)
        getInt(h)
        getInt(v)
        getInt(e)

        rate=(double)(d*d*PI*e)/4.0;
        rate=rate-(double)v;

        if(rate>=EPS)
            printf("NO\n");
        else
        {
            printf("YES\n");
            printf("%.7lf\n",((double)(d*d*PI*h)/(-4.0))/rate );
        }

    }

    return 0;
}