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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
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

int gcd(int a, int b);

int gcd(int a, int b)
{
    if(b>a)
    {
        a=a^b;
        b=a^b;
        a=a^b;
    }

    int c;

    while(1)
    {
        if(b==0)
            return a;

        c=b;
        b=a%b;
        a=c;
    }
}


int main()
{
    int N;
    int array[MAX];

    bool sieve[MAX];
    int i,j;
    vector <int> primo;
    vector <int> ans;

    for(i=2;i<1000;i++)
    {
        if(sieve[i]==0)
        {
            primo.pb(i);

            for(j=i*i;j<MAX;j+=i)
            {
                sieve[j]=1;
            }
        }
    }



    getInt(N)

    for(i=0;i<N;i++)
        getInt(array[i])

    ans.pb(array[0]);
    int top=0;

    for(i=1;i<N;i++)
    {
        if(gcd(array[i],ans[top])!=1)
        {
            for(j=0;j<primo.size();j++)
            {
                if((array[i]%primo[j])&&(ans[top]%primo[j]))
                {
                    ans.pb(primo[j]);
                    ans.pb(array[i]);
                    top++;
                    top++;
                    break;
                }
            }
        }

        else
        {
            ans.pb(array[i]);
            top++;
        }

    }

    printf("%d\n",top+1-N);

    printf("%d",ans[0]);

    for(i=1;i<=top;i++)
    {
        printf(" %d",ans[i]);
    }

    printf("\n");





    return 0;
}