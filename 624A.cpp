/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9

int main ()
{
    int d,L,v1,v2;

    while(scanf("%d%d%d%d",&d,&L,&v1,&v2)!=EOF)
    {
        double ans=((L-d)*1.0)/((v1+v2)*1.0);

        printf("%.7lf\n",ans);
    }

    return 0;

}