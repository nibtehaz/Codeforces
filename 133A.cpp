#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char inp[105];
    int i;

    scanf("%s",inp);

    for(i=0;inp[i];i++)
    if((inp[i]=='H')||(inp[i]=='Q')||(inp[i]=='9')) {i=999; break;}

    if(i==999) printf("YES\n");
    else printf("NO\n");

    return 0;
}