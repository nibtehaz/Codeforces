#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char inp[105],temp;
    int i,cnt=1;

    scanf("%s",inp);

    temp=inp[0];


    for(i=1;inp[i];i++)
    {
       if(inp[i]==temp) {cnt++; if(cnt>=7) { temp='y'; break;  }}

       else
        {
            {
                temp=inp[i];
                cnt=1;
            }
        }
    }

    if(temp=='y') printf("YES\n");
    else printf("NO\n");


    return 0;
}