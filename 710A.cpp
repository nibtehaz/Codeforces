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
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma 

    char inp[20];

    while(scanf("%s",inp)!=EOF)
    {
        if(inp[0]=='a')
        {
            if(inp[1]=='1' || inp[1]=='8')
            {
                printf("3\n");
            }

            else
            {
                printf("5\n");
            }
        }

        else if(inp[0]=='h')
        {
            if(inp[1]=='1' || inp[1]=='8')
            {
                printf("3\n");
            }

            else
            {
                printf("5\n");
            }
        }

        else if(inp[1]=='1' || inp[1]=='8')
        {
            printf("5\n");
        }

        else
        {
            printf("8\n");
        }
    }
     
    return 0;
}