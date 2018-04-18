#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int melt,bhalo,m,temp,cnt;
    
    while(scanf("%d %d",&bhalo,&m)!=EOF)
    {
        
        cnt=bhalo;
        
        melt=bhalo;
        temp=melt/m;
        bhalo=temp;
        cnt+=bhalo;
        melt=bhalo+(melt%m);
        
        
        while(1)
        {
            temp=melt/m;
            bhalo=temp;
            cnt+=bhalo;
            melt=bhalo+(melt%m);
            
            if(melt<m) break;
        
            
        }
        
        
                
        printf("%d\n",cnt);
        
    }
            
    return 0;

}
