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

 
int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma 

    long long int l1,r1,l2,r2,k;

    getLong(l1)
    getLong(r1)
    getLong(l2)
    getLong(r2)
    getLong(k)

    long long int ans=0;
    
    if(l1<=k && k<=r1)
    {
        
        ans=BIGGER( SMALLER(k-1,r2) - BIGGER(l1,l2)+1 , 0 );

        ans+=BIGGER( SMALLER(r1,r2) - BIGGER(k+1,l2)+1 , 0);
 
    }
    
    else
    {
        
        ans=BIGGER( SMALLER(r1,r2) - BIGGER(l1,l2)+1 , 0 );
    }
       
    printf("%lld\n",ans);

    return 0;
}