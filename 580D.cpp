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

#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define FPEQUAL(FP1,FP2) fabs(FP1-FP2)<=EPS
#define FPLT(FP1,FP2) (FP1-FP2)<=EPS
#define FPGT(FP1,FP2) (FP1-FP2)>=EPS
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back


#define INF 1000000000

long long int memo[262147][19];
long long int a[20]={0,};
long long int rule[20][20]={0,};

long long int maxx=0;

int n;
int m;
int m_;
long long int limit;

int SETBIT(int n,int pos);

bool ISBITOFF(int n , int pos);

int SETBIT(int n,int pos)
{
    return n|=(1<<pos);
}

bool ISBITOFF(int n , int pos)
{
    return (n &(1<<pos))==0;
}

long long int dp(int state , int last , int taken);

long long int dp(int state , int last , int taken)
{
    //printf("%d %d %d \n",state,last,taken);

    if(taken==n)
        return 0;

    //DEBUG(memo[state][last][taken])

    if(last!=-1)
    {
        if(memo[state][last]!=-1)
            return memo[state][last];
    }

    int i;
    long long int ans=0,current,temp;

    for(i=0;i<n;i++)
    {
        if(ISBITOFF(state,i))
        {
            current=a[i];

            if(last!=-1)
                current+=rule[last][i];

            temp=dp(SETBIT(state,i),i,taken+1);
            ans=BIGGER(ans, current + temp );

            if(taken==m_)
            {
                maxx=BIGGER(maxx,temp+a[i]);
            }
        }
    }

    //printf("%d %d %d %lld\n",state,last,taken,ans);
    memo[state][last]=ans;



    return ans;
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int i,j,k,v;

    //INPUT

    getInt(n)
    getInt(m)
    getInt(k)

    m_=n-m;

    //DEBUG(m_)

    memset(memo,-1,sizeof(memo));

    limit=(1<<n) - 1;

    //DEBUG(limit)

    //DEBUG(memo[4][2][3])

    for(i=0;i<n;i++)
        getLong(a[i])

    while(k--)
    {
        getInt(i)
        getInt(j)
        getLong(v)

        rule[i-1][j-1]=v;
    }

    long long int garb=dp(0,-1,0);

    printf("%lld\n",maxx);




    return 0;
}













