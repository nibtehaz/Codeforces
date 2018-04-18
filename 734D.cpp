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
#include <map>
#include <list>
#include <stack>
#include <set>
#include <deque>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back
#define setBit(a,n) a|=1<<n;
#define resetBit(a,n) a&=~(1<<n);
#define checkBit(a,n) ((a&(1<<n))!=0)
#define toggleBit(a,n) a^=1<<n;

#define INF 1000000000

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int up,down,left,right,upleft,upright,downleft,downright;
    char inp[50];
    int kingX,kingY;
    int X,Y;
    int N,i;
    int type,diff;

    up=0;
    down=0;
    left=0;
    right=0;
    upleft=0;
    upright=0;
    downleft=0;
    downright=0;

    getInt(N)

    getInt(kingX)
    getInt(kingY)

    for(i=0;i<N;i++)
    {
        scanf("%s",inp);
        getInt(X)
        getInt(Y)

        // check for up

        if(X==kingX && Y>kingY)
        {
            diff=Y-kingY;

            if(diff<abs(up)||up==0)
            {
                if(inp[0]=='B')
                {
                    up=-diff;
                }

                else
                {
                    up=diff;
                }
            }
        }

        // check for down

        if(X==kingX && Y<kingY)
        {
            diff=kingY-Y;

            if(diff<abs(down)||down==0)
            {
                if(inp[0]=='B')
                {
                    down=-diff;
                }

                else
                {
                    down=diff;
                }
            }
        }

        // check for right

        if(Y==kingY && X>kingX)
        {
            diff=X-kingX;

            if(diff<abs(right)||right==0)
            {
                if(inp[0]=='B')
                {
                    right=-diff;
                }

                else
                {
                    right=diff;
                }
            }
        }

        // check for left

        if(Y==kingY && X<kingX)
        {
            diff=kingX-X;

            if(diff<abs(left)||left==0)
            {
                if(inp[0]=='B')
                {
                    left=-diff;
                }

                else
                {
                    left=diff;
                }
            }
        }

        // check for diagonal

        if(abs(X-kingX)==abs(Y-kingY))
        {
            diff = abs(X-kingX);

            // check for up right

            if(X>kingX && Y > kingY)
            {
                if(diff<abs(upright)||upright==0)
                {
                    if(inp[0]=='R')
                    {
                        upright=-diff;
                    }

                    else
                    {
                        upright=diff;
                    }
                }
            }

            // check for up left

            if(X < kingX && Y > kingY)
            {
                if(diff<abs(upleft)||upleft==0)
                {
                    if(inp[0]=='R')
                    {
                        upleft=-diff;
                    }

                    else
                    {
                        upleft=diff;
                    }
                }
            }

            // check for down left

            if(X < kingX && Y < kingY)
            {
                if(diff<abs(downleft)||downleft==0)
                {
                    if(inp[0]=='R')
                    {
                        downleft=-diff;
                    }

                    else
                    {
                        downleft=diff;
                    }
                }
            }

            // check for down right

            if(X > kingX && Y < kingY)
            {
                if(diff<abs(downright)||downright==0)
                {
                    if(inp[0]=='R')
                    {
                        downright=-diff;
                    }

                    else
                    {
                        downright=diff;
                    }
                }
            }


        }
    }

    if(up>0 || down>0 || right>0 || left>0 || upright >0 || upleft>0 || downright>0 || downleft>0)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}
