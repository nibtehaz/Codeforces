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
#define INPUT freopen("C-small-practice.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 300005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

long long int ncr[40][40];
long long int fact[40];



int main()
{
    //while(1)
    {
        int n,h,d;
    int i,a,b,node;

    getInt(n)
    getInt(d)
    getInt(h)


    if(2*h<d||d<h ||(d>n-1)||(h>n-1)||(d<2&&n>2))
        printf("-1\n");

    else if(d==h)
    {
        if(h==n-1)
        {
            for(i=1;i<n;i++)
                printf("%d %d\n",i,i+1);
        }



        else
        {
            node=1;

            for(i=1;i<=h;i++)
            {
                printf("%d %d\n",node,node+1);
                node++;
            }


            while(node<n)
            {
                printf("%d %d\n",2,node+1);
                node++;
            }
        }
    }

    else
    {
        node=1;

        for(i=1;i<=h;i++)
        {
            printf("%d %d\n",node,node+1);
            node++;
        }

        d-=h;
        d--;

        //a=node;

        node++;

        if(d>=0)
            printf("%d %d\n",1,node);


        for(i=1;i<=d;i++)
        {
            printf("%d %d\n",node,node+1);
            node++;
        }


        while(node<n)
        {
            printf("%d %d\n",1,node+1);
            node++;
        }


    }
    }

    return 0;
}

