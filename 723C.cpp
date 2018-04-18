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

    int n,m;
    int ase[2005]={0,},lagbe[2005],threshold=0,change=0;
    int ino[2005],opo[2005];
    int i,j,k;

    getInt(n)
    getInt(m)

    for(i=1;i<=n;i++)
    {
        getInt(ino[i])

        if(ino[i]<=m)
        {
            ase[ino[i]]++;
        }
    }

    threshold=n/m;

    for(i=1;i<=m;i++)
    {
        if(ase[i]<threshold)
        {
            lagbe[i]=threshold-ase[i];
        }
        else
        {
            lagbe[i]=0;
        }
        //DEBUG(lagbe[i])
    }

    for(j=1;j<=m;j++)
    {
        if(lagbe[j]!=0)
        {
            break;
        }
    }
    //DEBUG(j)

    for(i=1;i<=n;i++)
    {
        opo[i]=ino[i];
    }

    for(i=1;i<=n;i++)
    {
        if(j>m)
        {
            break;
        }

        if(ino[i]>m)
        {
            opo[i]=j;
            change++;
            lagbe[j]--;
            ase[j]++;

            if(ase[j]==threshold)
            {
                for(;j<=m;j++)
                {
                    if(lagbe[j]!=0)
                    {
                        break;
                    }
                }
            }
        }
    }


    for(i=1;i<=n;i++)
    {
        if(j>m)
        {
            break;
        }

        if(ino[i]<=m && ase[ino[i]]<=threshold)
        {
            opo[i]=ino[i];
        }

        else if(ino[i]<=m)
        {
            opo[i]=j;
            change++;
            ase[ino[i]]--;
            ase[j]++;
            lagbe[j]--;

            if(ase[j]==threshold)
            {
                for(;j<=m;j++)
                {
                    if(lagbe[j]!=0)
                    {
                        break;
                    }
                }
            }
        }
    }

    printf("%d %d\n",threshold,change);
    printf("%d",opo[1]);
    for(i=2;i<=n;i++)
    {
        printf(" %d",opo[i]);
    }

    printf("\n");

    return 0;
}
