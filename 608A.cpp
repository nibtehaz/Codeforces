/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005


int main()
{
    int n,s,fi,ti;
    int time,i;

    while(scanf("%d%d",&n,&s)!=EOF)
    {
        int array[2000]={0,};
        time=0;

        for(i=0;i<n;i++)
        {
            scanf("%d%d",&fi,&ti);
            //printf("%d\n",array[fi]);

            if(array[fi]<ti)
                array[fi]=ti;
                //printf("%d\n",array[fi]);
        }
        //for(i=0;i<=s;i++)
            //printf("%d\n",array[i]);


        for(i=s;i>=0;)
        {
            if(array[i]>time)
            {
                time++;
                continue;
            }
            else
            {
                time++;
                i--;
                continue;
            }
        }

        printf("%d\n",time-1);
    }



    return 0;

}

