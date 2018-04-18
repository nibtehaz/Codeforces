#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    int n,i,x1,y1,x2,y2;
    unsigned long long int sum;

    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            sum+=(x2-x1+1)*(y2-y1+1);

        }
        printf("%llu\n",sum);

    }


    return 0;

}
