#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i,j,ans,r,c,k,kno;
    
    while(scanf("%d %d %d",&r,&c,&k)!=EOF)
    {
        ans=0;
        int grid[1005][1005]={0,};
        
        for(kno=1;kno<=k;kno++)
        {
            scanf("%d %d",&i,&j);
            if(i<=r&&j<=c)grid[i][j]=1;
            
            if(ans==0)
            {
                if(((grid[i+1][j]==1)&&(grid[i][j-1]==1)&&(grid[i+1][j-1]==1))|| ((grid[i-1][j]==1)&&(grid[i][j-1]==1)&&(grid[i-1][j-1]==1))||((grid[i+1][j]==1)&&(grid[i+1][j+1]==1)&&(grid[i][j+1]==1))|| ((grid[i-1][j]==1)&&(grid[i][j+1]==1)&&(grid[i-1][j+1]==1))) ans=kno;       
            }
        }
    
        printf("%d\n",ans);
            
    }
    
                
    return 0;

}