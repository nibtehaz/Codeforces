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

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int N,initial,present,final,i,cnt;
    int P[MAX];

    while(scanf("%d",&N)!=EOF)
    {
        getInt(initial)
        getInt(final)

        for(i=1;i<=N;i++)
        {
            getInt(P[i])
        }

        cnt=0;
        present=initial;
        while(1)
        {
            if(present==final)
                break;

            cnt++;
            present=P[present];

            //DEBUG(present)
            //char ch =getchar();

            if(cnt>N)
            {
                cnt=-1;
                break;
            }
        }


        printf("%d\n",cnt);
    }

    return 0;
}

