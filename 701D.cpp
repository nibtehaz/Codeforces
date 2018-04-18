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
#define MAX 123654
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

int smallJourney(int persons , double S , double T);
double BS(double lo,double hi);

int K,N;
double u,v,S;

int smallJourney(int persons , double S , double T)
{
    double x,y,z,t1,t2;

    if(S<=EPS)
        return 1;
    if(T<=EPS)
        return 0;

    t1=(S-u*T)/(v-u);

    if(t1<EPS)
        t1=0;
    //DEBUG(T)
    //DEBUG(t1)
    //printf("State ");
    //DEBUG(t1-T);
     else if(t1-T>EPS)
        return 0;

    persons-=K;

    if(persons<=0)
        return 1;

    x=v*t1;
    y=u*t1;

    t2=(x-y)/(u+v);
    z=u*t2;

    return smallJourney(persons,S-y-z,T-t1-t2);
}

double BS(double lo,double hi)
{
    double mid;
    int temp;
    int iterate=300;

    while(iterate--)
    {
        mid=(lo+hi)/2.0;

        temp=smallJourney(N,S,mid);

        if(temp==1)
        {
            hi=mid;
        }

        else
        {
            lo=mid;
        }

        //DEBUG(mid)
    }

    return lo;
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    getInt(N)
    getDouble(S)
    getDouble(u)
    getDouble(v)
    getInt(K)


    printf("%.8f\n",BS(0,S/u));

    //DEBUG("*************")
    //DEBUG(smallJourney(N,S,4));
        //DEBUG(smallJourney(N,S,5));



    return 0;
}