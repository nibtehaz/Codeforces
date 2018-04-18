/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 200005



int main()
{
    int d1,d2,d3,ans,path;

    while (scanf("%d%d%d",&d1,&d2,&d3)!=EOF)
    {
        ans=d1+d2+d3;

        path=2*d1+2*d2;

        if(path<ans)
            ans=path;

        path = 2*d1 + 2*d3;

        if(path<ans)
            ans=path;

        path = 2*d2 + 2*d3;

        if(path<ans)
            ans=path;


        printf("%d\n",ans);
    }


    return 0;

}
