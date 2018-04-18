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
#define INPUT freopen("myInput.txt","r",stdin);
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


#define INF 1000000000

int delt=0;

vector <vector<int> >adjList;

map<int,map<int,int> >weight;

int value[MAX];
bool color[MAX]={0,};

void dfsWithKadane(int node , long long int cumulSum , long long int maxx , int term);

void dfsWithKadane(int node , long long int cumulSum , long long int maxx , int term)
{
    int i;
    long long int newWeight;
    long long int cumulSum2,maxx2;

    color[node]=1;

    //printf("%d %lld %lld %d\n",node,cumulSum,maxx,term);

    for(i=0;i<adjList[node].size();i++)
    {

        if(color[adjList[node][i]]==1)
            continue;

        //color[adjList[node][i]]=1;

        newWeight=weight[node][adjList[node][i]];

        if(cumulSum+newWeight<0)
        {
            cumulSum2=0;
        }

        else
        {
            cumulSum2=cumulSum+newWeight;
        }

        if(cumulSum2>maxx)
        {
            maxx2=cumulSum2;
        }

        else
        {
            maxx2=maxx;
        }

        if((cumulSum2>value[adjList[node][i]])||(term==1))
            dfsWithKadane(adjList[node][i],cumulSum2,maxx2,1);
        else
            dfsWithKadane(adjList[node][i],cumulSum2,maxx2,0);
    }

    if(term==1)
        delt++;
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int N;
    int i;
    int p,c;

    getInt(N)

    adjList.pb({});

    for(i=1;i<=N;i++)
    {
        getInt(value[i])
        adjList.pb({});
    }

    for(i=1;i<N;i++)
    {
        getInt(p)
        getInt(c)

        adjList[i+1].pb(p);
        adjList[p].pb(i+1);

        weight[i+1][p]=c;
        weight[p][i+1]=c;
    }

    /*for(i=1;i<=N;i++)
    {
        printf("%d\n",i);
        for(int j=0;j<adjList[i].size();j++)
        {
            printf("%d %d %d\n",adjList[i][j],value[adjList[i][j]],weight[i][adjList[i][j]]);
        }
        printf("*************\n");
    }*/

    dfsWithKadane(1,0,0,0);


    printf("%d\n",delt);


    return 0;
}