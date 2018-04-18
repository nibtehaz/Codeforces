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
#define MAX 1000005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back

#define INF 1000000000



int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    long long int a,n,m,b,c,m2;
    int test=0;

    //OUTPUT

    getLong(a)

    // case 1

    //a = n^2 + m^2

    for(n=1;;n++)
    {
        if(n*n>=a)
            break;

        //DEBUG(n)
        m2=a-n*n;

        //printf("n %lld m2 %lld\n",n,m2);

        m=sqrt(double(m2));
        //DEBUG(m)

        //char ch=getchar();
        if(m*m==m2 && m!=n)
        {
            test=1;
            goto done1;
        }

        m++;
        if(m*m==m2 && m!=n)
        {
            test=1;
            goto done1;
        }


    }

    done1:

    if(test==1)
    {
        b=2*m*n;
        c=abs(n*n-m*m);

        printf("%lld %lld\n",SMALLER(b,c),BIGGER(b,c));
        //DEBUG(1)

        return 0;
    }

    // case 2

    //a = n^2 - m^2
    long long int x,y;

    for(x=1;;x++)
    {
        if(x*x>=a)
            break;

        if(a%x==0)
        {
            y=a/x;

            if((x+y)%2==0)
            {
                n=(x+y)/2;
                m=abs(x-y)/2;
                test=1;
                goto done2;
            }
        }


    }

    done2:

    if(test==1)
    {
        b=2*m*n;
        c=(n*n+m*m);

        printf("%lld %lld\n",SMALLER(b,c),BIGGER(b,c));
        //DEBUG(2)

        return 0;
    }


    // case 3

    //a = 2*m*n

    a/=2;

    for(x=1;;x++)
    {
        if(x*x>=a)
            break;

        if(a%x==0)
        {
            y=a/x;


                n=x;
                m=y;
                test=1;
                goto done32;
            }
        }


    done32:


    if(test==1)
    {
        b=abs(n*n-m*m);
        c=(n*n+m*m);

        printf("%lld %lld\n",SMALLER(b,c),BIGGER(b,c));
        //DEBUG(3)
        return 0;
    }

    printf("-1\n");

    return 0;
}