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


long long int arr[6000];
long long int cumSum[6000];

long long int query(int L,int R);

long long int query(int L,int R)
{
	return cumSum[R] - cumSum[L];
}

int main()
{
	// Bismillahir Rahmanir Rahim 
	// Rabbi Zidni Ilma 

	int N;
	long long int cur;
	int curL,curR;
	long long int max1,max2,max3;
	long long int sm1,sm2,sm3;
	int ans1,ans2,ans3;
	int tem1,tem2;
	int i,i1,i2,i3;
	int fnd=0,fnd1,fnd2;

	getInt(N)

	for(i=0;i<N;i++)
	{
		getLong(arr[i])
	}

	cumSum[0]=0;

	for(i=0;i<N;i++)
	{
		cumSum[i+1] = cumSum[i] + arr[i] ;
	}


	for(i2=0;i2<=N;i2++)
	{
		sm3=0;
		fnd1=0;
		for(i1=0;i1<=i2;i1++)
		{
			sm1 = query(0,i1) - query(i1,i2);

			if(fnd1==0)
			{
				max1=sm1;
				tem1=i1;
				fnd1=1;
			}

			else
			{
				if(sm1>max1)
				{
					max1=sm1;
					tem1=i1;
				}
			}
		}

		fnd2=0;

		for(i3=i2;i3<=N;i3++)
		{
			sm2 = query(i2,i3) - query(i3,N);

			if(fnd2==0)
			{
				max2=sm2;
				tem2=i3;
				fnd2=1;
			}

			else
			{
				if(sm2>max2)
				{
					max2=sm2;
					tem2=i3;
				}
			}
		}

		if(fnd==0)
		{
			max3=max1+max2;
			ans2=i2;
			ans1=tem1;
			ans3=tem2;
			fnd=1;
		}

		else
		{
			if(max1+max2>max3)
			{
				max3=max1+max2;
				ans2=i2;
				ans1=tem1;
				ans3=tem2;
			}
		}
	}

	printf("%d %d %d\n",ans1,ans2,ans3);

	 
    return 0;
}