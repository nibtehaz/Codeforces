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
#define MAX 1000005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back

#define INF 1000000000



int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma 

    int n,m;
    int a,b,c;
    int cnt;

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        cnt=0;

        c=BIGGER(n,m);

        for(a=0;a<=c;a++)
        {
            for(b=0;b<=c;b++)
            {
                if((a+b*b==n)&&(b+a*a==m))
                {
                    cnt++;
                }
            }
        }

        printf("%d\n",cnt);
    }
     
    return 0;
}
