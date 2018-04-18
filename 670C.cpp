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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("B-small-attempt0.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 200005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

#define INF 1000000000

map <int,int> myMap;
int b[MAX],c[MAX];

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,m;
    int i;
    
    int inp;

    getInt(n)


    for(i=0;i<n;i++)
    {
        getInt(inp)

        if(myMap.find(inp)==myMap.end())
        {
            myMap[inp]=1;
        }

        else
        {
            myMap[inp]++;
        }
    }


    getInt(m)

    for(i=0;i<m;i++)
    {
        getInt(b[i])
    }


    for(i=0;i<m;i++)
    {
        getInt(c[i])
    }

    int maxIndex=0,maxSat=0,maxAlmost=0;
    int sat,almost;

    for(i=0;i<m;i++)
    {
        sat=myMap[b[i]];
        almost=myMap[c[i]];

        if(sat>maxSat)
        {
            maxIndex=i;
            maxSat=sat;
            maxAlmost=almost;
        }

        else if(sat==maxSat && almost>maxAlmost)
        {
            maxIndex=i;
            maxSat=sat;
            maxAlmost=almost;
        }
    }

    printf("%d\n",maxIndex+1 );


    return 0;
}