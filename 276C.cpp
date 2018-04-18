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

int tree[800005]={0,};
int arraay[200005];
int coefficient[200005];

void update(int node , int lo , int hi , int rangeLo , int rangeHi , int value);
int query(int node , int lo , int hi , int index);

void update(int node , int lo , int hi , int rangeLo , int rangeHi , int value)
{
    if(rangeLo<=lo && hi<=rangeHi) // completely in
    {
        tree[node] += value ;
        return;
    }

    if(hi<rangeLo || lo>rangeHi )
    {
        return;
    }

    int leftNode = node<<1;
    int rightNode = leftNode+1;
    int mid=(lo+hi)/2;

    update(leftNode,lo,mid,rangeLo,rangeHi,value);
    update(rightNode,mid+1,hi,rangeLo,rangeHi,value);

}

int query(int node , int lo , int hi , int index)
{
    if(index<lo || index>hi)
    {
        return 0;
    }

    if(lo==hi)
    {
        return tree[node];
    }

    int leftNode = node<<1;
    int rightNode = leftNode+1;
    int mid=(lo+hi)/2;

    return tree[node]+query(leftNode,lo,mid,index)+query(rightNode,mid+1,hi,index);

}

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int N,Q,L,R;
    int i,j;
    long long int ans=0;

    getInt(N)
    getInt(Q)

    for(i=0;i<N;i++)
    {
        getInt(arraay[i])
        //arraay[i]=200000;
    }

    for(i=0;i<Q;i++)
    {
        getInt(L)
        getInt(R)
        //L=1;
        //R=200000;

        update(1,0,N-1,L-1,R-1,1);
    }

    for(i=0;i<N;i++)
    {
        coefficient[i]=query(1,0,N-1,i);
        //printf("%d ",coefficient[i]);
    }
    //printf("\n");

    sort(arraay,arraay+N);
    sort(coefficient,coefficient+N);

    for(i=0;i<N;i++)
    {
        ans += (long long int)arraay[i] * (long long int)coefficient[i];
    }

    printf("%lld\n",ans);


    return 0;
}
