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

int memo[25][500]={0,};

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int n,m;
    int arr[25];
    int i,j,k,temp,kmax=0,i2,j2;
    int test=0,fnd;

    getInt(n)
    getInt(m)

    for(i=0;i<n;i++)
    {
        k=0;
        temp=0;
        for(j=0;j<m;j++)
        {
            getInt(arr[j]);

            if((arr[j]-1)==(j))
            {
                temp=setBit(temp,j);
            }
        }

        memo[i][k]=temp;

        k++;

        for(i2=0;i2<m;i2++)
        {
            for(j2=0;j2<m;j2++)
            {
                if(i2==j2)
                    continue;

                temp=memo[i][0];
                if((arr[i2]-1)==j2) temp=setBit(temp,j2);
                if((arr[i2]-1)!=j2) temp=resetBit(temp,j2);
                if((arr[j2]-1)==i2)temp=setBit(temp,i2);
                if((arr[j2]-1)!=i2)temp=resetBit(temp,i2);

                memo[i][k]=temp;
                k++;
            }
        }

        kmax=BIGGER(k,kmax);
    }

    temp=0;
    int pemp=0;
    for(i=0;i<m;i++)
        pemp=setBit(temp,i);
    temp=pemp;
    fnd=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<kmax;j++)
        {
            if(memo[i][j]==temp)
            {
                fnd++;
                goto hoise;
            }
        }
        hoise:
            ;
    }

    if(fnd==n)
    {
        test=1;
    }

    for(i2=0;i2<m;i2++)
    {
        for(j2=0;j2<m;j2++)
        {
            if(i2==j2)
                continue;

            temp=pemp;
            temp=resetBit(temp,i2);
            temp=resetBit(temp,j2);

            fnd=0;

            for(i=0;i<n;i++)
            {
                for(j=0;j<kmax;j++)
                {
                    if(memo[i][j]==temp)
                    {
                        fnd++;
                        goto hoise2;
                    }
                }
                hoise2:
                    ;
            }

            if(fnd==n)
            {
                test=1;
            }

        }
    }

    printf("%s\n",test==1 ? "YES":"NO" );

    return 0;
}