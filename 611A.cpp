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
#define MAX 1000005


int main()
{
    int x,type;
    char inp[MAX];

    while(scanf("%d",&x)!=EOF)
    {
      scanf("%s",inp);
      scanf("%s",inp);

      if(!strcmp(inp,"week"))
      {
        if(x==5 || x==6)
          printf("53\n");
        else
          printf("52\n");
      }
      else
      {
        if(x<=29)
          printf("12\n");
        else if(x==30)
          printf("11\n");
        else
          printf("7\n");
      }
    }

    return 0;

}