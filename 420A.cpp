#include <stdio.h>
#include<string.h>

char mirror[20][3]={"AA","E3","HH","II","MM","OO","S2","TT","UU","VV","WW","XX","YY","Z5","11","2S","3E","5Z","88","00"};

int main()
{
    char str[100005];
    int i,test,n,j;

    while(scanf("%s",str)!=EOF)
    {
        n=strlen(str);
        test=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<20;j++)
            {
                if((mirror[j][0]==str[i])&&(mirror[j][1]==str[n-1-i]))
                break;

                else if(j==19)
                {
                    test=0;
                    break;
                }
            }
            if(test==0) break;
        }

        if(test==1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}