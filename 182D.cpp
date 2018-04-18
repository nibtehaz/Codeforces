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

set<int> book;
int cnt=0;

char S[MAX];
char period[MAX];

vector<int>multiples;

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int len1,len2,lenP=0,i,j,k,test;

    // process 1st string

    scanf("%s",S);
    len1=strlen(S);


    for(i=1;;i++)
    {
        if(i*i>len1)
        {
            break;
        }

        if(i*i==len1)
        {
            multiples.pb(i);
        }

        if(len1%i==0)
        {
            multiples.pb(i);
            multiples.pb(len1/i);
        }
    }

    sort(multiples.begin(),multiples.end());

    for(i=0;i<multiples.size();i++)
    {
        test=1;

        for(j=0;j<len1;j++)
        {
            if(S[j]!=S[j%multiples[i]])
            {
                test=0;
                break;
            }
        }

        if(test==1)
        {
            for(j=0;j<multiples[i];j++)
            {
                period[lenP++]=S[j];
            }

            break;
        }
    }

    k=len1/lenP;

    for(i=1;;i++)
    {
        if(i*i>k)
        {
            break;
        }

        if(k%i==0)
        {
            book.insert(i);
            book.insert(k/i);
        }
    }

    // process 2nd string

    scanf("%s",S);
    len2=strlen(S);

    test=int(len2%lenP==0);

    for(j=0;j<len2;j++)
    {
        if(S[j]!=period[j%lenP])
        {
            test=0;
            break;
        }
    }


    if(test==1)
    {
        k=len2/lenP;

        for(i=1;;i++)
        {
            if(i*i>k)
            {
                break;
            }

            if(i*i==k)
            {
                if(book.find(i)!=book.end())
                {
                    cnt++;
                }

                break;
            }

            if(k%i==0)
            {
                if(book.find(i)!=book.end())
                {
                    cnt++;
                }

                if(book.find(k/i)!=book.end())
                {
                    cnt++;
                }
            }
        }
    }

    printf("%d\n",cnt);

    return 0;
}
