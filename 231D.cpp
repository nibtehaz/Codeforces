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

    int x,y,z,x1,y1,z1,a1,a2,a3,a4,a5,a6;

    getInt(x)
    getInt(y)
    getInt(z)

    getInt(x1)
    getInt(y1)
    getInt(z1)

    getInt(a1)
    getInt(a2)
    getInt(a3)
    getInt(a4)
    getInt(a5)
    getInt(a6)

    if(0<=x && x<=x1 && 0<=z && z<=z1)
    {
        if(y<0)
        {
            printf("%d\n",a1);
        }

        else if(y>y1)
        {
            printf("%d\n",a2);
        }
    }

    else if(x>x1 && 0<=z && z<=z1)
    {
        if(y<0)
        {
            printf("%d\n",a1+a6);
        }

        else if(0<=y && y<=y1)
        {
            printf("%d\n",a6);
        }

        else
        {
            printf("%d\n",a2+a6);
        }
    }

    else if(x<0 && 0<=z && z<=z1)
    {
        if(y<0)
        {
            printf("%d\n",a1+a5);
        }

        else if(0<=y && y<=y1)
        {
            printf("%d\n",a5);
        }

        else
        {
            printf("%d\n",a2+a5);
        }
    }

    else if(0<=x && x<=x1 && z<0)
    {
        if(y<0)
        {
            printf("%d\n",a1+a3);
        }

        else if(0<=y && y<=y1)
        {
            printf("%d\n",a3);
        }

        else
        {
            printf("%d\n",a2+a3);
        }
    }

    else if(0<=x && x<=x1 && z>z1)
    {
        if(y<0)
        {
            printf("%d\n",a1+a4);
        }

        else if(0<=y && y<=y1)
        {
            printf("%d\n",a4);
        }

        else
        {
            printf("%d\n",a2+a4);
        }
    }

    else if(x>x1 && z<0)
    {
        if(y<0)
        {
            printf("%d\n",a6+a3+a1);
        }

        else if(0<=y && y<=y1)
        {
            printf("%d\n",a6+a3);
        }

        else
        {
            printf("%d\n",a6+a3+a2);
        }
    }

    else if(x<0 && z<0)
    {
        if(y<0)
        {
            printf("%d\n",a5+a3+a1);
        }

        else if(0<=y && y<=y1)
        {
            printf("%d\n",a5+a3);
        }

        else
        {
            printf("%d\n",a5+a3+a2);
        }
    }

    else if(x<0 && z>z1)
    {
        if(y<0)
        {
            printf("%d\n",a5+a4+a1);
        }

        else if(0<=y && y<=y1)
        {
            printf("%d\n",a5+a4);
        }

        else
        {
            printf("%d\n",a5+a4+a2);
        }
    }

    else if(x>x1 && z>z1)
    {
        if(y<0)
        {
            printf("%d\n",a6+a4+a1);
        }

        else if(0<=y && y<=y1)
        {
            printf("%d\n",a6+a4);
        }

        else
        {
            printf("%d\n",a6+a4+a2);
        }
    }


    return 0;
}
