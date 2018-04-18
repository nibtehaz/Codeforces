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


void update(long long int n,int am);
int query(long long int n);


int inpp[25];

map<long long int,int>bank;
int data[1050000]={0,};

void update(long long int n,int am)
{
    int i;

    for(i=0;i<20;i++)
    {
        inpp[i]=(n%10)%2;
        n/=10;
    }

    int temp=0;

    for(i=19;i>=0;i--)
    {
        temp=temp*2+inpp[i];
    }

    data[temp]+=am;
}

int query(long long int n)
{
    int i;

    for(i=0;i<20;i++)
    {
        inpp[i]=(n%10)%2;
        n/=10;
    }

    int temp=0;

    for(i=19;i>=0;i--)
    {
        temp=temp*2+inpp[i];
    }

    return data[temp];
}


int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int Q;
    long long int n;
    char inp[20];

    getInt(Q)

    while(Q--)
    {
        scanf("%s",inp);
        getLong(n)

        if(inp[0]=='+')
        {
            if(bank.find(n)!=bank.end())
            {
                bank[n]++;
            }

            else
            {
                bank[n]=1;
            }

            update(n,1);
        }

        else if(inp[0]=='-')
        {
            bank[n]--;

            update(n,-1);
        }

        else
        {
            printf("%d\n",query(n));
        }
    }


    return 0;
}