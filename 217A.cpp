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

int component;
int root[200];
int rankk[200];

void initialize(int n);
int findRoot(int n);
void unionn(int x , int y);

void initialize(int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        root[i]=i;
        rankk[i]=0;
    }

    component=n;
}

int findRoot(int n)
{
    if(root[n]==n)
        return n;
    else
    {
        root[n]=findRoot(root[n]);
        return root[n];
    }
}

void unionn(int x , int y)
{
    int p=findRoot(x);
    int q=findRoot(y);

    if(p==q)
        return;

    component--;

    if(rankk[p]>rankk[q])
    {
        root[q]=p;
    }

    else if(rankk[p]<rankk[q])
    {
        root[p]=q;
    }

    else
    {
        root[p]=q;
        rankk[q]++;
    }
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int N;
    int x[200],y[200];
    int i,j;

    getInt(N)

    initialize(N);

    for(i=0;i<N;i++)
    {
        getInt(x[i])
        getInt(y[i])
    }

    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(x[i]==x[j] || y[i]==y[j])
                unionn(i,j);
        }
    }

    printf("%d\n",component-1);

    return 0;
}






