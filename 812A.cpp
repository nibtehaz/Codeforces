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


int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int l1,s1,r1,p1;
    int l2,s2,r2,p2;
    int l3,s3,r3,p3;
    int l4,s4,r4,p4;

    scanf("%d%d%d%d",&l1,&s1,&r1,&p1);
    scanf("%d%d%d%d",&l2,&s2,&r2,&p2);
    scanf("%d%d%d%d",&l3,&s3,&r3,&p3);
    scanf("%d%d%d%d",&l4,&s4,&r4,&p4);


    printf("%s\n", ( p1 & (s1 | l1 | r1 | l2 | r4 | s3) ) |( p2 & (s2 | l2 | r2 | l3 | r1 | s4) ) | ( p3 & (s3 | l3 | r3 | l4 | r2 | s1) ) | ( p4 & (s4  | l4 | r4 | l1 | r3 | s2) ) ? "YES" : "NO" );

    return 0;
}
