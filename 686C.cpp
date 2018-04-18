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

#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define FPEQUAL(FP1,FP2) fabs(FP1-FP2)<=EPS
#define FPLT(FP1,FP2) (FP1-FP2)<=EPS
#define FPGT(FP1,FP2) (FP1-FP2)>=EPS
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back


#define INF 1000000000

long long int memo[262147][19];
long long int a[20]= {0,};
long long int rule[20][20]= {0,};


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,m;
    int hbit,mbit,i,hour,minute;
    long long int pre;
    long long int ans,limit;
    int hv,mv;

    getInt(n)
    getInt(m)

    limit=SMALLER(n*m,823543);

    pre=7;
    hbit=1;

    while(pre<n)
    {
        hbit++;
        pre*=7;
    }

    pre=7;
    mbit=1;

    while(pre<m)
    {
        mbit++;
        pre*=7;
    }

   //DEBUG(hbit)
    //DEBUG(mbit)


    if(hbit+mbit>7)
    {
        ans=0;
    }

    else
    {
        ans=0;

        bool found[10];
        int j;
        int test;
        int temp;
        long long int tt;

        for(i=0; i<limit; i++)
        {

            test=1;

            minute=i%m;
            hour=i/m;
            //printf("%d %d\n",hour,minute);
            hv=0;
            mv=0;

            for( j=0; j<7; j++)
            {
                found[j]=0;
            }

            while(hour!=0)
            {
                temp=hour%7;
                hv++;
                hour/=7;

                if(found[temp]==0)
                {
                    found[temp]=1;
                }

                else
                {
                    test=0;
                    goto shesh;
                }

            }

            while(hv<hbit)
            {
                hv++;

                if(found[0]==0)
                {
                    found[0]=1;
                }

                else
                {
                    //DEBUG("H")
                    test=0;
                    goto shesh;
                }
            }

            while(minute!=0)
            {
                temp=minute%7;
                minute/=7;
                mv++;

                if(found[temp]==0)
                {
                    found[temp]=1;
                }

                else
                {
                    //DEBUG("M")
                    test=0;
                    goto shesh;
                }

            }

            //DEBUG(found[0])

            while(mv<mbit)
            {
                mv++;
                //DEBUG("L")
                if(found[0]==0)
                {
                    found[0]=1;
                }

                else
                {
                    test=0;
                    goto shesh;
                }
            }

            ans++;

            //printf("YES\n");

shesh:
            ;
        }
    }

    printf("%lld\n",ans );



    return 0;
}