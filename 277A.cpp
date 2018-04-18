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

int p[200];
int rankk[200];
int components=0;

void init(int n);
void unionn(int x,int y);
int findRoot(int x);

void init(int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        p[i]=i;
        rankk[i]=0;
    }

    components=n;
}

void unionn(int x,int y)
{
    int px=findRoot(x);
    int py=findRoot(y);

    if(px==py)
        return;

    components--;

    if(rankk[x]>rankk[y])
    {
        p[py]=p[px];
    }

    else if(rankk[x]<rankk[y])
    {
        p[px]=p[py];
    }

    else
    {
        p[px]=p[py];
        rankk[py]++;
    }
}

int findRoot(int x)
{
    if(x!=p[x])
    {
        p[x]=findRoot(p[x]);
        return p[x];
    }

    else
    {
        return p[x];
    }
}



int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int N,M;
    vector <int> arr[200];
    int i,j,k,noob=0;

    getInt(N)
    getInt(M)

    init(N);

    for(i=0;i<N;i++)
    {
        getInt(k)

        if(k==0)
            noob++;

        while(k--)
        {
            getInt(j)
            arr[j].pb(i);
        }
    }

    for(i=1;i<=M;i++)
    {
        for(j=0;j<arr[i].size();j++)
        {
            for(k=j+1;k<arr[i].size();k++)
            {
                unionn(arr[i][j],arr[i][k]);
            }
        }
    }

    components-=noob;

    components=BIGGER(components,1);

    printf("%d\n",components-1+noob);

    return 0;
}
