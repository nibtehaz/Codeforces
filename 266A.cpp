#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int n,i,cnt=0;
    char inp[100],temp;

    scanf("%d",&n);
    scanf("%s",inp);

    temp=inp[0];

    for(i=1;i<n;i++)
    {
        if(inp[i]==temp)
        {
            cnt++;
        }
        else
            temp=inp[i];
    }

    printf("%d\n",cnt);


    return 0;
}