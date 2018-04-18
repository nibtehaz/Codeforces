#include <stdio.h>
#include<string.h>
#include<math.h>


int main()
{
    int n,m,price[300],key,earn,i,j;

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++){
            scanf("%d",&price[i]);

            key=price[i];

            for(j=i-1;j>=0;j--)
            {
                if(price[j]<=key) break;
                else price[j+1]=price[j];
            }
            price[j+1]=key;
        }

        earn=0;
        for(i=0;i<m;i++)
        {
            if(price[i]>0) break;
            else earn-=price[i];
        }
        printf("%d\n",earn);
    }

	return 0;
}

