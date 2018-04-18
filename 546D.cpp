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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 200005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

#define INF 1000000

long long int sieve[5000005]={0,};

int main()
{
    int i,j,temp,cnt,T,a,b;

    sieve[0]=0;
    sieve[1]=0;

    for(i=2;i<5000005;i++)
    {
        if(sieve[i]==0)
        {
            for(j=i;j<5000005;j+=i)
            {
                cnt=0;
                temp=j;

                while(temp)
                {
                    if(temp%i==0)
                    {
                        temp/=i;
                        cnt++; 
                    }
                    else
                        break;
                }

                sieve[j]+=cnt;
            }
        }
    }

    /*while(1)
    {
        getInt(cnt)
        DEBUG(sieve[cnt])
    }*/

    for(i=1;i<5000005;i++)
    {
        sieve[i]+=sieve[i-1];
    }

    /*while(1)
    {
        getInt(cnt)
        DEBUG(sieve[cnt])
    }*/

    getInt(T)

    while(T--)
    {
        getInt(a)
        getInt(b)

        printf("%lld\n",sieve[a]-sieve[b]);
    }


    return 0;
}
