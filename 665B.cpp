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
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int n,m,k;
    int a[105][105];
    int array[105];
    long long int ans;
    int i,j,i2,j2;

    //while(1)
    {
        getInt(n)
        getInt(m)
        getInt(k)

        for(i=0;i<k;i++)
        {
            getInt(array[i])
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                getInt(a[i][j])
        }

        ans=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                //for(i2=0;i2<k;i2++)
                  //  printf("%d ",array[i2]);
                //printf("\n");
                for(i2=0;i2<k;i2++)
                {
                    if(array[i2]==a[i][j])
                    {
                        ans+=i2+1;

                        for(j2=i2;j2>0;j2--)
                        {
                            array[j2]=array[j2-1];
                        }

                        array[0]=a[i][j];

                        break;
                    }
                }
            }
        }

        printf("%lld\n",ans);
    }
    return 0;
}