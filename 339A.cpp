#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char inp[105];
    int a[3]={0,0,0},i,n;


    scanf("%s",inp);

    a[inp[0]-'0'-1]++;
    n=strlen(inp);
    for(i=2;i<n;i+=2)
        a[inp[i]-'0'-1]++;


    i=0;
    {
        while(a[0]--){inp[i]='1';i+=2;}
        while(a[1]--){inp[i]='2';i+=2;}
        while(a[2]--){inp[i]='3';i+=2;}

    }

    printf("%s\n",inp);







    return 0;
}