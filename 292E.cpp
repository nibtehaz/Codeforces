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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("A-large (2).in","r",stdin);
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

int tree[4*MAX];
int A[MAX];
int B[MAX];

void init(int node , int lo , int hi);
void update(int node , int lo , int hi , int pos , int value , int len);
int query(int node , int lo , int hi , int index);

void init(int node , int lo , int hi)
{
    if(lo==hi)
    {
        tree[node]=-1;
        return;
    }

    int leftNode=node*2;
    int rightNode=node*2+1;
    int mid=(lo+hi)/2;

    init(leftNode,lo,mid);
    init(rightNode,mid+1,hi);

    tree[node]=0;
}

void update(int node , int lo , int hi , int pos , int value , int len)
{
    if(pos+len < lo || pos > hi )
        return;

    if(lo==pos && hi == pos+len)
    {
        tree[node]=value;
        return;
    }

    int leftNode=node*2;
    int rightNode=node*2+1;
    int mid=(lo+hi)/2;
    int copied=0;

    if(tree[node]!=0)
        update(leftNode,lo,mid,lo,tree[node],mid-lo);

    if(!(pos+len < lo || pos > mid))
    {
        update(leftNode,lo,mid,pos,value,SMALLER(len,mid-pos));
        copied=SMALLER(len,mid-pos)+1;
    }

    //printf("copied= %d\n",copied);
    int newValue=value+copied;
    int newLen=len-copied;

    if(tree[node]!=0)
        update(rightNode,mid+1,hi,mid+1,tree[node]+(mid-lo+1),hi-mid-1);


    if(!(pos+len < mid+1 || pos > hi || newLen<0) )
        update(rightNode,mid+1,hi,BIGGER(pos,mid+1),newValue,newLen);

    tree[node]=0;
}

int query(int node , int lo , int hi , int index)
{
    if(lo<=index && index <=hi )
    {
        if(tree[node]==-1)
            return B[index];
        else if(tree[node]!=0)
        {
            return A[tree[node]+index-lo];
        }
    }

    int leftNode=2*node;
    int rightNode=2*node+1;
    int mid=(lo+hi)/2;

    if(lo<=index && index <=mid)
        return query(leftNode,lo,mid,index);

    if(mid+1<=index && index <=hi)
        return query(rightNode,mid+1,hi,index);
}

void printTree(int node , int lo , int hi)
{
    if(lo==hi)
    {
        printf("lo= %d hi= %d value= %d\n",lo,hi,tree[node]);
        return;
    }
    int leftNode=2*node;
    int rightNode=2*node+1;
    int mid=(lo+hi)/2;

    printf("lo= %d hi= %d value= %d\n",lo,hi,tree[node]);
    printTree(leftNode,lo,mid);
    printTree(rightNode,mid+1,hi);
}



int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,m;
    int i;
    int q,x,y,k;

    getInt(n)
    getInt(m)

    for(i=1;i<=n;i++)
        getInt(A[i])
    for(i=1;i<=n;i++)
        getInt(B[i])

    init(1,1,n);

    while(m--)
    {
        getInt(q)

        if(q==1)
        {
            getInt(x)
            getInt(y)
            getInt(k)

            update(1,1,n,y,x,k-1);

            /*printf("Tree\n");
            printTree(1,1,n);
            printf("*****************\n");*/
        }

        else
        {
            getInt(k)
            printf("%d\n",query(1,1,n,k));
        }
    }


    return 0;
}

