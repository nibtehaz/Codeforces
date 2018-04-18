#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int k,len,plen,i,j,test;
    char str[100000];

    scanf("%s%d",str,&k);
    len=strlen(str);
    if(len%k!=0)
        printf("NO\n");

    else
    {
        test=1;
        plen=len/k;
        
        for(j=0;j<k;j++)
        {
            for(i=0;i<(plen/2);i++)
            {
                if(str[j*plen+i]==str[j*plen+plen-i-1])
                    continue;
                else
                    {
                        test=0;

                        break;
                    }

            }
        }
        if(test==0)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
