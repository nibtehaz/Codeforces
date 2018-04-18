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

    int n,n_;
    int even=2,odd=1;
    int mat[100][100]={0,};
    int i,j;

    getInt(n)

    n_=n/2;
                        //top left
    for(i=0;i<n_;i++)
    {
        for(j=i;j<n_;j++)
        {
            mat[i][j]=even;
            even+=2;
        }
    }
                    //bottom left
    for(i=n_+1;i<n;i++)
    {
        for(j=n-1-i;j<n_;j++)
        {
            mat[i][j]=even;
            even+=2;
        }
    }

                // top right
    for(i=0;i<n_;i++)
    {
        for(j=n_+1;j<n-i;j++)
        {
            mat[i][j]=even;
            even+=2;
        }
    }

                    //bottom right
    for(i=n_+1;i<n;i++)
    {
        for(j=n_+1;j<=i;j++)
        {
            mat[i][j]=even;
            even+=2;
        }
    }

                    //against all odds

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mat[i][j]==0)
            {
                mat[i][j]=odd;
                odd+=2;
            }
        }
    }


    for(i=0;i<n;i++)
    {
        printf("%d",mat[i][0]);

        for(j=1;j<n;j++)
        {
            printf(" %d",mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}