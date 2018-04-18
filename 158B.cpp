#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int n,team[4]={0,0,0,0},kid,taxy;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&kid);
        team[kid-1]++;
    }

    taxy=team[3]+(team[1]/2);
    team[1]=team[1]%2;

    if(team[2]<=team[0])
    {
        taxy+=team[2];
        team[0]-=team[2];
    }

    else if (team[2]>team[0])
    {
        team[2]-=team[0];
        taxy+=team[2]+team[0];
        team[0]=0;
    }

    if(team[1]<=(team[0]/2))
    {
        taxy+=team[1];
        team[0]-=team[1]*2;
    }

    else if (team[1]>(team[0]/2))
    {
        team[1]-=(team[0]/2);
        taxy+=team[1]+(team[0]/2);
        team[0]=0;
    }
    taxy+=(team[0]/4);
    team[0]=team[0]%4;
    if((team[0]>0)&&(team[0]<=4)) taxy+=1;

    printf("%d\n",taxy);

    return 0;
}
