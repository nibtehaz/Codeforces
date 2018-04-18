/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int main(void) 
{
    int n,inventory[100005],cnt[100005]={0,},available[100005]={0,},avail=0,i,j;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&inventory[i]);
        cnt[inventory[i]]++;
    }
    
    for(i=1;i<=n;i++)
    {
        if(cnt[i]==0)
        {
            available[avail++]=i;
        }
    }
    
    j=0;
    for(i=0;i<n;i++)
    {
        if((cnt[inventory[i]]>1)||(inventory[i]>n))
        {
            cnt[inventory[i]]--;
            inventory[i]=available[j];
            j++;
            
        }
    }
    
    printf("%d",inventory[0]);
    
    for(i=1;i<n;i++)
        printf( " %d",inventory[i]);
    
    printf("\n");
    
    return 0;
}