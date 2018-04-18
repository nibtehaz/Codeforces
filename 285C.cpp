﻿/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
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

#define INF 1000000000

bool chk[3*MAX]={0,};
vector <int> pp;

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int N;
    int i,j;
    long long int tot=0;

    getInt(N)

    for(i=0;i<N;i++)
    {
        getInt(j)

        if( (1<=j && j<=N) && (chk[j]==0) )
        {
            chk[j]=1;
        }

        else
        {
            pp.pb(j);
        }
    }

    sort(pp.begin(),pp.end());

    j=1;

    while(j<=N && chk[j]==1)
    {
        j++;
    }

    for(i=0;i<pp.size();i++)
    {
        tot+=abs(j-pp[i]);

        chk[j]=1;

        while(j<=N && chk[j]==1)
        {
            j++;
        }
    }

    printf("%lld\n",tot);

    return 0;
}
