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
    int n,test=1,i,p[MAX];
    char f_name[MAX][60],l_name[MAX][60],choto[60],boro[60];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s",f_name[i],l_name[i]);
    }

    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        p[i]-=1;
    }


    if(strcmp(f_name[p[0]],l_name[p[0]])<0)
        ;
    else
        strcpy(f_name[p[0]],l_name[p[0]]);

    for(i=1;i<n;i++)
    {
        if(strcmp(f_name[p[i]],l_name[p[i]])<0)
        {
            strcpy(choto,f_name[p[i]]);
            strcpy(boro,l_name[p[i]]);
        }

        else
        {
            strcpy(boro,f_name[p[i]]);
            strcpy(choto,l_name[p[i]]);
        }

        if(strcmp(f_name[p[i-1]],choto)<0)
        {
            strcpy(f_name[p[i]],choto);
        }

        else if(strcmp(f_name[p[i-1]],boro)<0)
        {
            strcpy(f_name[p[i]],boro);
        }

        else
        {
            test=0;
            break;
        }
    }
    
    if(test==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

