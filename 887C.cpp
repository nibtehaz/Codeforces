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
#define INPUT freopen("in.in","r",stdin);
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

struct RubicsCube
{
    int f1[4];
    int f2[4];
    int f3[4];
    int f4[4];
    int f5[4];
    int f6[4];
};

void printCube(RubicsCube cube);

bool perfect(RubicsCube rb)
{
    return ((rb.f1[0]==rb.f1[1] && rb.f1[2]==rb.f1[3] && rb.f1[0]==rb.f1[3]) &&
            (rb.f2[0]==rb.f2[1] && rb.f2[2]==rb.f2[3] && rb.f2[0]==rb.f2[3]) &&
            (rb.f3[0]==rb.f3[1] && rb.f3[2]==rb.f3[3] && rb.f3[0]==rb.f3[3]) &&
            (rb.f4[0]==rb.f4[1] && rb.f4[2]==rb.f4[3] && rb.f4[0]==rb.f4[3]) &&
            (rb.f5[0]==rb.f5[1] && rb.f5[2]==rb.f5[3] && rb.f5[0]==rb.f5[3]) &&
            (rb.f6[0]==rb.f6[1] && rb.f6[2]==rb.f6[3] && rb.f6[0]==rb.f6[3]) ) ;
}

bool move1(RubicsCube rb)
{
    int t0=rb.f1[0];
    int t2=rb.f1[2];
    
    rb.f1[0]=rb.f2[0];
    rb.f1[2]=rb.f2[2];

    rb.f2[0]=rb.f3[0];
    rb.f2[2]=rb.f3[2];

    rb.f3[0]=rb.f6[1];
    rb.f3[2]=rb.f6[3];

    rb.f6[1]=t0;
    rb.f6[3]=t2;

    printCube(rb);
    return perfect(rb);
}

bool move2(RubicsCube rb)
{
    int t0=rb.f6[1];
    int t2=rb.f6[3];

    rb.f6[1]=rb.f3[0];
    rb.f6[3]=rb.f3[2];

    rb.f3[0]=rb.f2[0];
    rb.f3[2]=rb.f2[2];
    
    rb.f2[0]=rb.f1[0];
    rb.f2[2]=rb.f1[2];

    rb.f1[0]=t0;
    rb.f1[2]=t2;
    printCube(rb);
    return perfect(rb);
}

bool move3(RubicsCube rb)
{
    int t0=rb.f2[0];
    int t1=rb.f2[1];
    // 2 4 6 5 
    rb.f2[0]=rb.f4[0];
    rb.f2[1]=rb.f4[1];

    rb.f4[0]=rb.f6[0];
    rb.f4[1]=rb.f6[1];

    rb.f6[0]=rb.f5[0];
    rb.f6[1]=rb.f5[1];

    rb.f5[0]=t0;
    rb.f5[1]=t1;

    printCube(rb);
    return perfect(rb);
}

bool move4(RubicsCube rb)
{
    int t0=rb.f5[0];
    int t1=rb.f5[1];
    // 2 4 6 5 

    rb.f5[0]=rb.f6[0];
    rb.f5[1]=rb.f6[1];

    rb.f6[0]=rb.f4[0];
    rb.f6[1]=rb.f4[1];

    rb.f4[0]=rb.f2[0];
    rb.f4[1]=rb.f2[1];

    rb.f2[0]=t0;
    rb.f2[1]=t1;

    printCube(rb);
    return perfect(rb);
}

bool move5(RubicsCube rb)
{
    int t0=rb.f4[0];
    int t2=rb.f4[2];
    // 1 5 3 4  

    rb.f4[0]=rb.f3[2];
    rb.f4[2]=rb.f3[3];

    rb.f3[3]=rb.f5[1];
    rb.f3[2]=rb.f5[3];

    rb.f5[1]=rb.f1[0];
    rb.f5[3]=rb.f1[1];

    rb.f1[0]=t2;
    rb.f1[1]=t0;

    printCube(rb);
    return perfect(rb);
}

bool move6(RubicsCube rb)
{
    int t0=rb.f1[0];
    int t1=rb.f1[1];
    // 1 5 3 4  

    rb.f1[0]=rb.f5[1];
    rb.f1[1]=rb.f5[3];

    rb.f5[1]=rb.f3[3];
    rb.f5[3]=rb.f3[2];

    rb.f3[2]=rb.f4[0];
    rb.f3[3]=rb.f4[2];

    rb.f4[2] = t0;
    rb.f4[0] = t1;

    printCube(rb);
    return perfect(rb);
}

void printCube(RubicsCube cube)
{
    return;
    
    for(int i=0;i<4;i+=2)
    {
        printf("%d ",cube.f1[i]);
    }
    printf(" : ");

    for(int i=0;i<4;i+=2)
    {
        printf("%d ",cube.f2[i]);
    }
    printf(" : ");

    for(int i=0;i<4;i+=2)
    {
        printf("%d ",cube.f3[i]);
    }
    printf(" : ");

    for(int i=0;i<4;i+=2)
    {
        printf("%d ",cube.f4[i]);
    }
    printf(" : ");

    for(int i=0;i<4;i+=2)
    {
        printf("%d ",cube.f5[i]);
    }
    printf(" : ");

    for(int i=0;i<4;i+=2)
    {
        printf("%d ",cube.f6[i]);
    }
    printf(" : \n");

    for(int i=1;i<4;i+=2)
    {
        printf("%d ",cube.f1[i]);
    }
    printf(" : ");

    for(int i=1;i<4;i+=2)
    {
        printf("%d ",cube.f2[i]);
    }
    printf(" : ");

    for(int i=1;i<4;i+=2)
    {
        printf("%d ",cube.f3[i]);
    }
    printf(" : ");

    for(int i=1;i<4;i+=2)
    {
        printf("%d ",cube.f4[i]);
    }
    printf(" : ");

    for(int i=1;i<4;i+=2)
    {
        printf("%d ",cube.f5[i]);
    }
    printf(" : ");

    for(int i=1;i<4;i+=2)
    {
        printf("%d ",cube.f6[i]);
    }
    printf(" : \n\n");
}

 
int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma 

    int i,j;

    RubicsCube cube;

    for(i=0;i<4;i++)
    {
        getInt(cube.f1[i])
    }

    
    for(i=0;i<4;i++)
    {
        getInt(cube.f2[i])
    }

    for(i=0;i<4;i++)
    {
        getInt(cube.f3[i])
    }

    for(i=0;i<4;i++)
    {
        getInt(cube.f4[i])
    }

    for(i=0;i<4;i++)
    {
        getInt(cube.f5[i])
    }

    for(i=0;i<4;i++)
    {
        getInt(cube.f6[i])
    }

    printCube(cube);

 
    if(move1(cube) || move2(cube) || move3(cube) || move4(cube) || move5(cube) || move6(cube))
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
    

}
