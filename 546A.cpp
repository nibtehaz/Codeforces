#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    unsigned long long int k,w,n,cost;

    while(scanf("%llu%llu%llu",&k,&w,&n)!=EOF)
    {
        cost=(n*(n+1)*k)/2;
        if(cost>w) printf("%llu\n",cost-w);
        else printf("0\n");

    }

    return 0;
}
