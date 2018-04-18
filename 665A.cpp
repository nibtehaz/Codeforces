/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int a,Ta,b,Tb,c,d,i,x,y,cnt;

   // while(1)
    {
        getInt(a)
        getInt(Ta)
        getInt(b)
        getInt(Tb)
        scanf("%d:%d",&x,&y);
        cnt=0;
        c=x*60+y;

        d=c+Ta;
//DEBUG(c)
//DEBUG(d)
        for(i=300;i<=1439;i++)
        {
            if((i-300)%b==0)
            {
                if(i<d && i+Tb>c)
                {
                    cnt++;
                }
            }
        }

        printf("%d\n",cnt);
    }


    return 0;
}