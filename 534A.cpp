#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int n,i;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==1) printf("%d\n%d\n",1,1);

        else if(n==2) printf("%d\n%d\n",1,1);

        else if(n==3) printf("%d\n%d %d\n",2,1,3);

        else if(n==4) printf("%d\n%d %d %d %d\n",4,2,4,1,3);

        else
        {
            printf("%d\n",n);
            for(i=0;(2*i+1)<=n;i++)
            {
                printf("%d ",2*i+1);
            }
            for(i=1;2*(i)<=(n);i++)
            {
                if(2*(i+1)>n) break;
                printf("%d ",2*i);
            }
            printf("%d\n",2*i);
        }
    }

    return 0;
}