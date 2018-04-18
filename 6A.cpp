/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


int triangle(int a ,int b ,int c);
int segment(int a ,int b , int c);

int main()
{
    int a,b,c,d,cas;

    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
    {
        if( (triangle(a,b,c)==1)||(triangle(a,b,d)==1)||(triangle(a,c,d)==1)||(triangle(b,c,d)==1)   )
            cas=1;
        else if( (segment(a,b,c)==1)||(segment(a,b,d)==1)||(segment(a,c,d)==1)||(segment(b,c,d)==1)    )
            cas=2;
        else
            cas=0;

        if(cas==1)
            printf("TRIANGLE\n");
        else if(cas==2)
            printf("SEGMENT\n");
        else
            printf("IMPOSSIBLE\n");

    }

    return 0;

}



int triangle(int a ,int b ,int c)
{
    if((a<(b+c))&&(c<(b+a))&&(b<(c+a)))
        return 1;
    else
        return 0;
}

int segment(int a ,int b , int c)
{
    if((a==(b+c))||(c==(b+a))||(b==(c+a)))
        return 1;
    else
        return 0;
}

