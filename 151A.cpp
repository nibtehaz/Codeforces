/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005



int main()
{
    int n, k, l, c, d, p, nl, np, min , drink , lime , salt  ;

    while(scanf("%d%d%d%d%d%d%d%d",&n, &k, &l, &c, &d, &p, &nl, &np)!=EOF)
    {
        drink = (k*l)/nl;
        lime = c*d ;
        salt = p / np ;

        min = drink ;

        if(lime<min)
            min=lime;

        if(salt<min)
            min=salt;

        printf("%d\n",min/n);

    }


    return 0;
}
