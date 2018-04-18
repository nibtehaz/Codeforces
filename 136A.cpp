#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int gift[105],i,n,p;
    
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&p);
            gift[p-1]=i;
        }
        
        for(i=0;i<n-1;i++)
        printf("%d ",gift[i]);
        
        printf("%d\n",gift[n-1]);
        
    }
        
            
    return 0;

}
