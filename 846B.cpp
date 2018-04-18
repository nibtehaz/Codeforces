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

long long int arr[50];
int N,K;
long long int M;
 



int main()
{
	// Bismillahir Rahmanir Rahim 
	// Rabbi Zidni Ilma 

	getInt(N)
	getInt(K)
	getLong(M)
	long long int tot=0;

	for(int i=0;i<K;i++)
	{
		getLong(arr[i])
		tot += arr[i];
	}

	sort(arr,arr+K);

	long long int maxx = 0 ;
	long long int timee;
	long long int pts;

	for(int i=0;i<=N;i++)
	{
		if(tot*i>M)
		{
			break;
		}

		timee = M - tot*i;

		pts = (K+1)*i;

		for(int j=0;j<K;j++)
		{
			long long int temp = timee/(arr[j]);
			temp = SMALLER(temp,N-i);
			timee -= temp*arr[j];
			pts += temp;
		}

		maxx = BIGGER(pts,maxx);
	}

	printf("%lld\n",maxx);
	

	 
    return 0;
}
