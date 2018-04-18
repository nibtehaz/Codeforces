#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char dirt[105][105],key[105];
int num[105];

int main()
{
    int i,j,n,max,house,test;

    scanf("%d",&n);
    house=0;
    max=0;

    for(i=0;i<n;i++)
    {
        scanf("%s",key);
        test=0;
        for(j=house-1;j>=0;j--)
        {
            if(strcmp(dirt[j],key)==0)
            {
                num[j]++;
                test=1;
                break;
            }
        }
        if(test==0)
        {
            strcpy(dirt[house],key);
            num[house]++;
            house++;
        }
    }

    for(i=0;i<house;i++)
        if(num[i]>max)
            max=num[i];

    printf("%d\n",max);







    return 0;
}
