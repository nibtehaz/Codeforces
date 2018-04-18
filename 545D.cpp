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
#define INPUT freopen("input.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

#define INF 1000000


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,array[MAX];
    int i,j,cnt;
    long long int sum;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            getInt(array[i]);

        sort(array,array+n);
        cnt=0;
        sum=0;

        cnt=1;
        sum=array[0];

        for(i=1;i<n;i++)
        {
            if(array[i]<sum)
                ;
            else
            {
                cnt++;
                sum+=array[i];
            }
        }

        printf("%d\n",cnt);
    }

    return 0;
}
