/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 200005


int main()
{
    int n,p,q;
    int i,k,j,test,k2,array[1000]={0,};
    char inp[MAX];

    while(scanf("%d%d%d",&n,&p,&q)!=EOF)
    {
        scanf("%s",inp);

        test=0;
        if(n%p==0)
        {
            printf("%d\n",n/p);

            for(i=0;i<n;i++)
            {
                for(j=0;j<p;j++)
                {
                    printf("%c",inp[i+j]);
                }
                i+=j;
                i--;
                printf("\n");
            }
        }
        else if(n%q==0)
        {
            printf("%d\n",n/q);

            for(i=0;i<n;i++)
            {
                for(j=0;j<q;j++)
                {
                    printf("%c",inp[i+j]);
                }
                i+=j;
                i--;
                printf("\n");
            }
        }
        else
        {
            for(i=1;;i++)
            {
                if((i*p>n)||(test==1))
                    break;
                j=n-i*p;
                k2=i;
                if(j%q==0)
                {
                    test=1;


                    printf("%d\n",i+(j/q));

                    for(k=0;k<n;k++)
                    {
                        for(k2=0;k2<p;k2++)
                        {
                            printf("%c",inp[k+k2]);
                        }
                        k+=k2;
                        k--;
                        i--;
                        printf("\n");
                        if(i==0)
                            break;
                    }

                    j=j/q;

                    k++;

                    for(;k<n;k++)
                    {
                        for(k2=0;k2<q;k2++)
                        {
                            printf("%c",inp[k+k2]);
                        }
                        k+=k2;
                        k--;
                        j--;
                        printf("\n");
                        if(j==0)
                            break;
                    }



                }
                if(test==1)
                    break;
            }

            if(test==0)
                printf("-1\n");
        }

    }

    return 0;

}