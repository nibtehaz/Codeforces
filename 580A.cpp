/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9


int main ()
{
    int n,inp[MAX],i,len,max,pre;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&inp[i]);
        }

        len=1;
        max=0;

        for(i=1;i<n;i++)
        {
            if(inp[i]>=inp[i-1])
                len++;

            else
            {
                if(len>max)
                    max=len;

                len=1;
            }
        }
        if(len>max)
            max=len;

        printf("%d\n",max);
    }


    return 0;

}
