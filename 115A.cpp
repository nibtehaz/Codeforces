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
#define floatingEqual(a,b) (fabs(a-b)<=EPS)
#define floatingLess(a,b) ((b-a)>=EPS)
#define floatingGreater(a,b) ((a-b)>=EPS)

#define INF 1000000000

vector<int> adjList[2005];
vector<int> bosses;

bool color[2005]={0,};
int maxx=0;

void dfs(int node , int level);

void dfs(int node , int level)
{
    int newLevel = level + 1 ;

    maxx=BIGGER(maxx,newLevel);

    for(int i=0;i<adjList[node].size();i++)
    {
        dfs(adjList[node][i],newLevel);
    }
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int N;
    int i,u;

    getInt(N)

    for(i=0;i<N;i++)
    {
        getInt(u)

        if(u==-1)
        {
            bosses.pb(i);
        }

        else
        {
            u--;
            adjList[u].pb(i);
        }
    }

    for(i=0;i<bosses.size();i++)
    {
        dfs(bosses[i],0);
    }

    printf("%d\n",maxx);

    return 0;
}
