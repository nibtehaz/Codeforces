/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int a,b,c,d,i,n;
    char ch;
    long long int calory;

    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
    {
        getchar();
        calory=0;

        while(1)
        {
            ch=getchar();
            if(ch=='\n')
                break;
            else if(ch=='1')
                calory+=a;
            else if(ch=='2')
                calory+=b;
            else if(ch=='3')
                calory+=c;
            else if(ch=='4')
                calory+=d;
        }

        printf("%lld\n",calory);

    }


    return 0;

}
