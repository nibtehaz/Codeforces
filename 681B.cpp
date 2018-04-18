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
#define INPUT freopen("myInput.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 1000005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back


#define INF 1000000000


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,a,b,c;
    int test=0;
    int i,j;

    getInt(n)

    if(n%1234567==0 || n%123456==0 || n%1234==0)
        test=1;

    for(a=0;;a++)
    {
        if(a*1234567>n)
            break;
        for(b=0;;b++)
        {
            i=n-(a*1234567)-(b*123456);

            if(i<0)
                break;
//printf("%d %d %d\n",a,b,i);
            if(i%1234==0)
            {
                test=1;
                break;
            }
        }
    }

    if(test==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
