/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int i,j,n,sp;
    char inp[2000],op[2000];

    while(scanf("%s",inp)!=EOF)
    {

        n=strlen(inp);
        j=0;

        for(i=0;i<(n-2);i++)
        {
            if(inp[i]=='W'&&inp[i+1]=='U'&&inp[i+2]=='B')
                i+=2;
            else
                break;
        }
        op[j++]=inp[i];
        sp=0;
        i++;

        for(;i<(n-2);i++)
        {
            if(inp[i]=='W'&&inp[i+1]=='U'&&inp[i+2]=='B')
                {
                    sp=1;
                    i+=2;
                }
            else
                {
                    if(sp==1)
                    {
                        op[j++]=' ';
                        op[j++]=inp[i];
                        sp=0;
                    }
                    else
                        op[j++]=inp[i];
                }
        }

        if(sp==1)
            op[j++]=' ';

        if(inp[i]=='W'&&inp[i+1]=='U'&&inp[i+2]=='B')
            op[j]='\0';
        else
        {
            op[j++]=inp[i];
            op[j++]=inp[i+1];
            op[j++]=inp[i+2];
            op[j]='\0';
        }

        printf("%s\n",op);

    }

    return 0;
}


