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
#define setBit(a,n) a|(1<<n)
#define setBitStatement(a,n) a|=1<<n;
#define resetBit(a,n) a&=~(1<<n);
#define checkBit(a,n) ((a&(1<<n))!=0)
#define toggleBit(a,n) a^=1<<n;
#define doubleingEqual(a,b) (fabs(a-b)<=EPS)
#define doubleingLess(a,b) ((b-a)>=EPS)
#define doubleingGreater(a,b) ((a-b)>=EPS)

#define INF 1000000000

vector <int>arr;

int main()
{
    // Bismillahir Rahmanir Rahim 
    // Rabbi Zidni Ilma 

    int N;
    int i,inp;
    int min1,min2,min3;
    long long int cnt1=0,cnt2=0,cnt3=0;
    long long int ans = 0 ;

    getInt(N)

    for(i=0;i<N;i++)
    {
        getInt(inp)
        arr.pb(inp);
    }

    sort(arr.begin(),arr.end());

    min1=arr[0];
    cnt1=(long long int )1;

    for(i=1;i<N;i++)
    {
        if(arr[i]==min1)
        {
            cnt1++;
        }

        else
        {
            min2=arr[i];
            cnt2=(long long int )1;
            i++;
            break;
        }
    }

    for(;i<N;i++)
    {
        if(arr[i]==min2)
        {
            cnt2++;
        }

        else
        {
            min3=arr[i];
            cnt3=(long long int )1;
            i++;
            break;
        }
    }

    for(;i<N;i++)
    {
        if(arr[i]==min3)
        {
            cnt3++;
        }

        else
        {
            break;
        }
    }

    if(cnt1>=3)
    {
        ans = (cnt1*(cnt1-1)*(cnt1-2))/6;
    }

    else if(cnt1==2)
    {
        ans = cnt2;
    }

    else if(cnt1==1)
    {
        if(cnt2==1)
        {
            ans = cnt3;
        }

        else
        {
            ans = (cnt2*(cnt2-1))/2;
        }
    }

    printf("%lld\n",ans);


    return 0;

}