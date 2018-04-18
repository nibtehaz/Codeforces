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

    int N;
    char inp[100];
    int bef,aft;
    int found=0;

    getInt(N)

    while(N--)
    {
        scanf("%s",inp);

        getInt(bef)
        getInt(aft)

        if(bef>=2400 && aft>bef)
            found=1;
    }
    
    if(found==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
