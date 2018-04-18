#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    double m,n;
    int ans;
    
    while(scanf("%lf %lf",&n,&m)!=EOF)
    {
        if(m!=0)
        {
        ans=(int)(n/(1-(1/m)));
        
        if(ans%(int)m==0) ans--;
        if(ans<0) ans=0;
        }
        else ans=(int)n;
        printf("%d\n",ans);
        
        
    }
        
    return 0;

}
