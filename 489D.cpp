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

vector <int> adjList[3005];

long long int adjMat[3005][3005]={0,};

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma 

    int n,m,i,j,k,a,b;
    long long int ans=0,tmp;


    getInt(n)
    getInt(m)

    for(i=0;i<m;i++)
    {
        getInt(a)
        getInt(b)

        if(a!=b)
            adjList[a].pb(b);
    }

    for(i=1;i<=n;i++)
    {
        for(j=0;j<adjList[i].size();j++)
        {
            a=adjList[i][j];

            for(k=0;k<adjList[a].size();k++)
            {
                if(adjList[a][k]!=i)
                {
                    adjMat[i][adjList[a][k]]++;
                }
            }
        }
    }


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
                continue;

            tmp=adjMat[i][j];

            ans += (tmp*(tmp-1))/2;
        }
    }

    printf("%lld\n",ans);

  

    return 0;
}
