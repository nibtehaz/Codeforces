#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int n,score,max,min,amazing;

    while(scanf("%d",&n)!=EOF)
    {
        scanf("%d",&score);
        max=score;
        min=score;
        amazing=0;
        n--;

        while(n--)
        {
            scanf("%d",&score);

            if(score>max)
            {
                max=score;
                amazing++;
            }

            if(score<min)
            {
                min=score;
                amazing++;
            }
        }

        printf("%d\n",amazing);
    }
    return 0;
}