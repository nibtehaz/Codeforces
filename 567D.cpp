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
#define MAX 200005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back

#define INF 1000000000

int tree[4*MAX]={0,};
int components=1;
vector < pair<int,int> > bank;


void init(int node , int lo , int hi);
void update(int node , int lo , int hi , int start , int endd , int assignn);
int query(int node,int lo,int hi,int index);

void init(int node , int lo , int hi)
{
    if(lo==hi)
    {
        tree[node]=1;
        return;
    }

    int left = 2*node;
    int right = left + 1 ;
    int mid=(lo+hi)/2;

    init(left,lo,mid);
    init(right,mid+1,hi);

    tree[node]=1;
}

void update(int node , int lo , int hi , int start , int endd , int assignn)
{
    if(start>endd)
        return;

    if(endd<lo || hi<start) //outside
    {
        return;
    }

    if( start<=lo && hi<=endd )
    {
        tree[node]=assignn;
        return;
    }

    int left=2*node;
    int right=left+1;
    int mid=(lo+hi)/2;

    update(left,lo,mid,start,endd,assignn);
    update(right,mid+1,hi,start,endd,assignn);

    tree[node]=-1;
}

int query(int node,int lo,int hi,int index)
{
    if(tree[node]!=-1)
        return tree[node];

    int left=2*node;
    int right=left+1;
    int mid=(lo+hi)/2;

    if(index<=mid)
        return query(left,lo,mid,index);
    else
        return query(right,mid+1,hi,index);
}


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,k,a,m;
    vector<int>arraay;
    int i,j;
    int total=0,current,cnt1,cnt2,cnt3;
    int val;

    getInt(n)
    getInt(k)
    getInt(a)


    getInt(m)

    for(i=1;i<=m;i++)
    {
        getInt(j)
        arraay.pb(j);
    }

    init(1,1,n);

    bank.pb(make_pair(1,n));

    total=(n+1)/(a+1);


    for(i=0;i<m;i++)
    {
        val=query(1,1,n,arraay[i]);

        //DEBUG(val)

        cnt1 = (bank[val-1].second - bank[val-1].first+2)/(a+1);
        cnt2 = (bank[val-1].second - arraay[i] + 1 ) / (a+1);
        cnt3 = (arraay[i] - bank[val-1].first + 1 ) / (a+1);

        //printf("%d %d %d\n",bank[val-1].second , bank[val-1].first,cnt1);
        //printf("%d %d %d\n",bank[val-1].second , arraay[i]+1,cnt2);
        //printf("%d %d %d\n",arraay[i]-1 , bank[val-1].first,cnt3);

        total -=(cnt1-cnt2-cnt3);
        if(total<k)
        {
            printf("%d\n",i+1);
            return 0;
        }

        update(1,1,n,bank[val-1].first,arraay[i]-1,val);
        components++;
        update(1,1,n,arraay[i]+1,bank[val-1].second,components);
        update(1,1,n,arraay[i],arraay[i],-1);

        bank.pb(make_pair(arraay[i]+1,bank[val-1].second));
        bank[val-1].second=arraay[i]-1;
        //DEBUG(total)
    }

    printf("-1\n");
    return 0;
}




