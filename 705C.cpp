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
#define EPS 1e-15

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
#define getDouble(a) scanf("%lf",&a);
#define getString(a) scanf("%s",a);
#define pb push_back
#define ppb pop_back

#define INF 1000000000

vector<int>database[3*MAX];
bool checked[3*MAX]={0,};

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,q,type,data;
    int i,currentNoti=0,unchkd=0,cumul=0;
    
    getInt(n)
    getInt(q)

    while(q--)
    {
        getInt(type)

        getInt(data)

        if(type==1)
        {
            unchkd++;
            database[data].pb(currentNoti);
            currentNoti++;

        }

        else if(type==2)
        {
            for(i=database[data].size()-1;i>=0;i--)
            {
                if(checked[database[data][i]]==1)
                {
                    break;
                }

                else
                {
                    checked[database[data][i]]=1;
                    unchkd--;
                }
            }
        }

        else
        {
            for(i=cumul;i<data;i++)
            {
                if(checked[i]==0)
                {
                    checked[i]=1;
                    unchkd--;
                }
            }

            cumul=BIGGER(data,cumul);
        }

        printf("%d\n",unchkd);

    }



    return 0;
}
