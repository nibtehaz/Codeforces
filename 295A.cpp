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
#define INPUT freopen("in.in","r",stdin);
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
#define setBit(a,n) a|(1<<n)
#define setBitStatement(a,n) a|=1<<n;
#define resetBit(a,n) a&=~(1<<n);
#define checkBit(a,n) ((a&(1<<n))!=0)
#define toggleBit(a,n) a^=1<<n;
#define doubleingEqual(a,b) (fabs(a-b)<=EPS)
#define doubleingLess(a,b) ((b-a)>=EPS)
#define doubleingGreater(a,b) ((a-b)>=EPS)

#define INF 1000000000

long long int zero = (long long int)0;
 

struct SegmentTreeLazyPropagation
{
    long long int tree[400020][2];

    SegmentTreeLazyPropagation()
    {
        memset(tree,0,sizeof(tree));
    }

    void update(int node , int lo , int hi , int qlo , int qhi , long long int val)
    {
        if(qlo>hi || qhi<lo)
        {
            return;
        }

        if(qlo<=lo && hi<=qhi)
        {
            tree[node][0] = (tree[node][0] + (hi-lo+1)*val);
            tree[node][1] = (tree[node][1] + val);
            return;
        }

        int leftNode = node<<1;
        int rightNode = leftNode+1;
        int mid = (lo+hi)>>1;

        update(leftNode,lo,mid,qlo,qhi,val);
        update(rightNode,mid+1,hi,qlo,qhi,val);

        tree[node][0] = (tree[leftNode][0] + tree[rightNode][0] + (hi-lo+1)*tree[node][1] );
    }

    long long int  queryy(int node , int lo , int hi , int index , long long int propagate)
    {
        if(index<lo || index>hi)
        {
            return zero;
        }

        if(lo==hi && index==lo)
        {
            return (propagate + tree[node][0]);
        }

        int leftNode = node<<1;
        int rightNode = leftNode+1;
        int mid = (lo+hi)>>1;
        long long int temp = (propagate + tree[node][1]);

        return ( queryy(leftNode,lo,mid,index,temp) + queryy(rightNode,mid+1,hi,index,temp) ) ;
                
    }
};

struct Query
{
    int L;
    int R;
    long long int Val;
};

SegmentTreeLazyPropagation arrayS ,action;

long long int arrayy[100005];
Query actionQuery[100005],arrayQuery[100005];


int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma 

    int N,M,K;
    int i,a,b;
    long long int c;


    getInt(N)
    getInt(M)
    getInt(K)

    for(i=0;i<N;i++)
    {
        getLong(arrayy[i])
    }

    for(i=0;i<M;i++)
    {
        getInt(a)
        getInt(b)
        getLong(c)

        arrayQuery[i]={a,b,c};
    }

    for(i=0;i<K;i++)
    {
        getInt(a)
        getInt(b)

        actionQuery[i]={a,b,1};
    }

    for(i=0;i<K;i++)
    {
        action.update(1,1,M,actionQuery[i].L,actionQuery[i].R,actionQuery[i].Val);
    }

    for(i=0;i<M;i++)
    {
        c=action.queryy(1,1,M,i+1,0);
        arrayS.update(1,1,N,arrayQuery[i].L,arrayQuery[i].R,arrayQuery[i].Val*c);
    }

    printf("%lld",arrayy[0]+arrayS.queryy(1,1,N,1,0));

    for(i=1;i<N;i++)
    {
        printf(" %lld",arrayy[i]+arrayS.queryy(1,1,N,i+1,0));        
    }

    printf("\n");   

    return 0;

}
