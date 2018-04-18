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



set <int> colorBook[100005];
int color[100005];
vector<int>adjList[100005];
bool pre[100005]={0,};

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma


    //INPUT

    int n,m;
    int i,j,k,a,b,maxx,maxColor;

    getInt(n)
    getInt(m)

    for(i=1;i<=n;i++)
    {
        getInt(color[i])
        pre[color[i]]=1;
    }

    while(m--)
    {
        getInt(a)
        getInt(b)

        adjList[a].pb(b);
        adjList[b].pb(a);
    }

    for(i=1;i<=n;i++)
    {
        //printf("doing for node %d\n",i );
        for(j=0;j<adjList[i].size();j++)
        {
            if(color[i]!=color[adjList[i][j]])
            {
                //printf("in Color %d goes node %d\n",color[i],adjList[i][j]);
                colorBook[color[i]].insert(color[adjList[i][j]]);
            }
        }
    }

    maxx=-1;

    for(i=1;i<100005;i++)
    {
        if(pre[i]==0)
            continue;

        j=colorBook[i].size();
        if(j>maxx)
        {
            maxx=j;
            maxColor=i;
        }

        //printf("%d %d\n",maxx,maxColor);
    }

    printf("%d\n",maxColor);

    return 0;
}
