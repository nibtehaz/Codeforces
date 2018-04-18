/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005




int main()
{
    int max=0,len,n,i,j=0,k,cnt[105][26]={0,};
    char inp[105][2005],bank[105][2005],type[105][5],C1,C2;
//OUTPUT
    scanf("%d",&n);
    gets(inp[0]);

    for(i=0;i<n;i++)
    {
        gets(inp[i]);
    }

    for(i=0;i<n;i++)
    {
        int c1=0,c2=0;
        char l1='A',l2='A';
        len=strlen(inp[i]);

        for(k=0;k<len;k++)
        {
            if(inp[i][k]==l1)
            {
                c1++;
            }
            else if(inp[i][k]==l2)
            {
                c2++;
            }
            else if(inp[i][k]!=l1&&l1=='A')
            {
                c1=1;
                l1=inp[i][k];
            }
            else if(inp[i][k]!=l2&&l2=='A')
            {
                c2=1;
                l2=inp[i][k];
            }

            else
            {
                l1='0';
                break;
            }
        }
        if(l1!='0')
        {
            if(l2=='A')
            {
                l2=l1;
                c2=0;
            }

                if(l1>l2)
                {
                    l1=l1^l2;
                    l2=l1^l2;
                    l1=l1^l2;
                    c1=c1^c2;
                    c2=c1^c2;
                    c1=c1^c2;
                }

            type[j][0]=l1;
            type[j][1]=l2;
            cnt[j][0]=c1;
            cnt[j][1]=c2;

            j++;

        }
    }

    for(C1='a';C1<='z';C1++)
    {
        for(C2=C1;C2<='z';C2++)
        {
            len=0;

            for(i=0;i<j;i++)
            {
                if(type[i][0]!=type[i][1])
                {
                    if(type[i][0]==C1&&type[i][1]==C2)
                    len+=cnt[i][0]+cnt[i][1];
                }
                else
                {
                    if(type[i][0]==C1||type[i][0]==C2)
                    len+=cnt[i][0]+cnt[i][1];
                }

               // printf("%c %c %c %c %d\n",C1,C2,type[i][0],type[i][1],len);
            }

            if(len>max)
                max=len;
        }
    }

    printf("%d\n",max);


    return 0;
}

