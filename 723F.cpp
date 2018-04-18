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

int parent[200005];
int rankk[200005];
int components;

vector<pair<int,int> >temp;
vector<pair<int,int> >ans;

vector<int>u;
vector<int>v;

vector<int>su;
vector<int>tu;

map<int,int>sc;
map<int,int>tc;
map<int,int>::iterator it;

vector<int>sonly;
vector<int>tonly;
vector<int>both;

void initialize(int n);
int findParent(int x);
bool checkIfConnected (int x , int y);
void unionn(int x , int y);

void initialize(int n)
{
    int i;

    for(i=1;i<=n;i++)
    {
        parent[i]=i;
        rankk[i]=0;
    }

    components=n;
}

int findParent(int x)
{
    if(parent[x]!=x)
    {
        parent[x]=findParent(parent[x]);
    }

    return parent[x];
}

bool checkIfConnected (int x , int y)
{
    return (findParent(x)==findParent(y));
}

void unionn(int x , int y)
{
    int p=findParent(x);
    int q=findParent(y);

    if(rankk[p]>rankk[q])
    {
        parent[q] = p;
    }

    else if(rankk[p]<rankk[q])
    {
        parent[p] = q;
    }

    else
    {
        parent[p]=q;
        rankk[q]++;
    }

    components--;
}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int n,m;
    int i,j,k,test=1,connectivity=0;
    int S,T,DS,DT;

    getInt(n)
    getInt(m)

    initialize(n);

    for(i=0;i<m;i++)
    {
        getInt(j)
        getInt(k)

        temp.pb(make_pair(j,k));
    }

    getInt(S)
    getInt(T)
    getInt(DS)
    getInt(DT)

    for(i=0;i<temp.size();i++)
    {
        if(temp[i].first==S || temp[i].second==S || temp[i].first==T || temp[i].second==T)
        {
            if(temp[i].first==S)
            {
                su.pb(temp[i].second);
            }

            if(temp[i].second==S)
            {
                su.pb(temp[i].first);
            }

            if(temp[i].first==T)
            {
                tu.pb(temp[i].second);
            }

            if(temp[i].second==T)
            {
                tu.pb(temp[i].first);
            }
        }

        else
        {
            u.pb(temp[i].first);
            v.pb(temp[i].second);
        }

    }

    temp.clear();

    for(i=0;i<u.size();i++)
    {
        if(!checkIfConnected(u[i],v[i]))
        {
            unionn(u[i],v[i]);
            ans.pb(make_pair(u[i],v[i]));
        }
    }

    u.clear();
    v.clear();

    for(i=0;i<su.size();i++)
    {
        sc.insert(make_pair(findParent(su[i]) , su[i] ) );
    }

    su.clear();

    for(i=0;i<tu.size();i++)
    {
        tc.insert(make_pair(findParent(tu[i]) ,tu[i] ));
    }

    tu.clear();

    it=sc.begin();

    for(;it!=sc.end();it++)
    {
        if(it->second==T)
        {
            connectivity=1;
        }

        else if(tc.find(it->first)!=tc.end())
        {
            both.pb(it->first);
        }

        else
        {
            sonly.pb(it->first);
        }
    }



    it=tc.begin();

    for(;it!=tc.end();it++)
    {
        if(it->second==S)
        {
            connectivity=1;
        }
        else if(sc.find(it->first)==sc.end())
        {
            tonly.pb(it->first);
        }
    }


    //DEBUG(sonly.size())
    //DEBUG(tonly.size())
    //DEBUG(both.size())

    for(i=0;i<sonly.size();i++)
    {
        //printf("%d ",sonly[i]);
        if(DS>0)
        {
            ans.pb(make_pair(S,sc[sonly[i]]));
            unionn(S,sc[sonly[i]]);
            DS--;
        }

        else
        {
            test=0;
        }
    }
    //printf("\n");
    sonly.clear();

    for(i=0;i<tonly.size();i++)
    {
        //printf("%d ",tonly[i]);
        if(DT>0)
        {
            ans.pb(make_pair(T,tc[tonly[i]]));
            unionn(T,tc[tonly[i]]);
            DT--;
        }

        else
        {
            test=0;
        }
    }
    //printf("\n");

    tonly.clear();

    for(i=0;i<both.size();i++)
    {
        //printf("%d ",both[i]);
        if(DS>0)
        {
            ans.pb(make_pair(S,sc[both[i]]));
            unionn(S,sc[both[i]]);
            DS--;

            if(!checkIfConnected(T,S))
            {
                if(DT>0)
                {
                    ans.pb(make_pair(T,tc[both[i]]));
                    unionn(T,tc[both[i]]);
                    DT--;
                }
            }
        }

        else if(DT>0)
        {
            ans.pb(make_pair(T,tc[both[i]]));
            unionn(T,tc[both[i]]);
            DT--;

            if(!checkIfConnected(T,S))
            {
                if(DS>0)
                {
                    ans.pb(make_pair(S,sc[both[i]]));
                    unionn(S,sc[both[i]]);
                    DS--;
                }
            }
        }

        else
        {
            test=0;
        }
    }
    //printf("\n");



    if(!checkIfConnected(T,S))
    {
        if(connectivity==1 && DT>0 && DS>0 )
        {
            unionn(T,S);
            ans.pb(make_pair(T,S));
        }
    }

    if(components!=1)
    {
        test=0;
    }

    if(test==0)
    {
        printf("No\n");
    }

    else
    {
        printf("Yes\n");

        for(i=0;i<ans.size();i++)
        {
            printf("%d %d\n",ans[i].first,ans[i].second);
        }
    }

    return 0;
}
