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

bool touches(int x,int y,int r,int R,int type)
{
	int d1 = x*x + y*y;
	int d2 = (r+R)*(r+R);

	//printf("%d %d %d\n",d1,d2,type );

	if(type==1)
	{
		return !(d1<d2);
	}

	else
	{
		d2 = (R-r)*(R-r);
		return (d1<=d2);
	}
} 

int main()
{
	// Bismillahir Rahmanir Rahim 
	// Rabbi Zidni Ilma 

	int D,R,R2;
	int n;
	int x,y,r;
	int cnt = 0;
	int i ;
	int t1,t2,t3,t4;

	getInt(R)
	getInt(D)

	R2 = R - D ;

	getInt(n)

	while(n--)
	{
		getInt(x)
		getInt(y)
		getInt(r)

		//if(( ( x*x+y*y)>((R2+r)*(R2+r)))&& ( ( ( (x*x+y*y) < ( (R+r)*(R+r) ) ) ) ) )/
		if(touches(x,y,r,R2,1) && touches(x,y,r,R,2))
		{
			//printf("c\n");
			cnt++;
		}
	}

	printf("%d\n",cnt);

	 


    return 0;

}