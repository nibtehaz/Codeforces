#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[200];
    int n;

    while(gets(str))
    {
        n=strlen(str)+1;
        printf("%d\n",n*26-n+1);
    }



    return 0;
}
