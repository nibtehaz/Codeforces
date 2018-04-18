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

    int N;
    int cnt[12]={0,};
    int modulo1[12]={1,4,7};
    int modulo2[12]={2,5,8};
    int i,j,ki=0;
    long long int sum=0;

    getInt(N)

    for(i=0;i<N;i++)
    {
        getInt(j)
        cnt[j]++;
        sum+=j;
    }

    if(cnt[0]==0)
    {
        printf("-1\n");
        return 0;
    }

    if(sum%3==1)
    {
        for(i=0;i<3;i++)
        {
            if(cnt[modulo1[i]]>0)
            {
                cnt[modulo1[i]]--;
                sum--;
                break;
            }
        }

        if(sum%3==1)
        {
            for(i=0;i<3;i++)
            {
                if(cnt[modulo2[i]]>0)
                {
                    cnt[modulo2[i]]--;
                    sum-=2;
                    break;
                }
            }
        }

        if(sum%3==2)
        {
            for(i=0;i<3;i++)
            {
                if(cnt[modulo2[i]]>0)
                {
                    cnt[modulo2[i]]--;
                    sum-=2;
                    break;
                }
            }
        }
    }

    else if(sum%3==2)
    {
        for(i=0;i<3;i++)
        {
            if(cnt[modulo2[i]]>0)
            {
                cnt[modulo2[i]]--;
                sum-=2;
                break;
            }
        }

        if(sum%3==2)
        {
            for(i=0;i<3;i++)
            {
                if(cnt[modulo1[i]]>0)
                {
                    cnt[modulo1[i]]--;
                    sum--;
                    break;
                }
            }
        }

        if(sum%3==1)
        {
            for(i=0;i<3;i++)
            {
                if(cnt[modulo1[i]]>0)
                {
                    cnt[modulo1[i]]--;
                    sum--;
                    break;
                }
            }
        }
    }

    for(i=9;i>=0;i--)
    {
        while(cnt[i]!=0)
        {
            if(i!=0)
            {
                ki=1;
            }

            else
            {
                if(ki==0)
                {
                    cnt[0]=1;
                }
            }
            printf("%d",i);
            cnt[i]--;
        }
    }

    printf("\n");



    return 0;
}
