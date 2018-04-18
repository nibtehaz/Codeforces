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
#define floatingEqual(a,b) (fabs(a-b)<=EPS)
#define floatingLess(a,b) ((b-a)>=EPS)
#define floatingGreater(a,b) ((a-b)>=EPS)

#define INF 1000000000

int givenAdjMat[505][505];
int myAdjMat[505][505];
bool present[505]={0,};
int order[505];
long long int anss[505];
int N;

long long int matrixSum();

long long int matrixSum()
{
    int i,j;
    long long int summ=0;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(myAdjMat[i][j]!=-1)
            {
                summ+=myAdjMat[i][j];
            }
        }
    }

    return summ;
}


int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    int i,j,k;
    int node;

    getInt(N)

    memset(myAdjMat,-1,sizeof(myAdjMat));

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            getInt(givenAdjMat[i][j])
        }
    }

    for(i=0;i<N;i++)
    {
        getInt(order[i])
        order[i]--;
    }

    for(k=N-1;k>=0;k--)
    {
        node=order[k];
        present[node]=1;

        for(i=0;i<N;i++)
        {
            if(present[i])
            {
                if(myAdjMat[i][node]==-1)
                {
                    myAdjMat[i][node]=givenAdjMat[i][node];
                }

                else // this will never happen
                {
                    myAdjMat[i][node]=SMALLER(myAdjMat[i][node], givenAdjMat[i][node]) ;
                }

                if(myAdjMat[node][i]==-1)
                {
                    myAdjMat[node][i]=givenAdjMat[node][i];
                }

                else // this will never happen
                {
                    myAdjMat[node][i]=SMALLER(myAdjMat[node][i], givenAdjMat[node][i]) ;
                }
            }
        }

        /*printf("------------------------------\n");
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                printf("%4d ",myAdjMat[i][j]);
            }
            printf("\n");
        }
        printf("\n");*/

        for(i=0;i<N;i++)
        {
            //i=order[ti];

            //for(int tj=N-1;tj>=0;tj--)
            for(j=0;j<N;j++)
            {
                //j=order[tj];

                if((myAdjMat[node][i]!=-1)&&(myAdjMat[i][j]!=-1))
                {
                    myAdjMat[node][j] = SMALLER(myAdjMat[node][j],myAdjMat[node][i]+myAdjMat[i][j]);
                }
            }
        }

        for(i=0;i<N;i++)
        {
            //i=order[ti];

            //for(int tj=N-1;tj>=0;tj--)
            for(j=0;j<N;j++)
            {
                //j=order[tj];

                if((myAdjMat[i][j]!=-1)&&(myAdjMat[j][node]!=-1))
                {
                    myAdjMat[i][node] = SMALLER(myAdjMat[i][node],myAdjMat[i][j]+myAdjMat[j][node]);
                }
            }
        }

        //for(int ti=N-1;ti>=0;ti--)
        for(i=0;i<N;i++)
        {
            //i=order[ti];

            //for(int tj=N-1;tj>=0;tj--)
            for(j=0;j<N;j++)
            {
                //j=order[tj];

                if((myAdjMat[i][node]!=-1)&&(myAdjMat[node][j]!=-1))
                {
                    myAdjMat[i][j] = SMALLER(myAdjMat[i][j],myAdjMat[i][node]+myAdjMat[node][j]);
                }
            }
        }



        /*for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                printf("%4d ",myAdjMat[i][j]);
            }
            printf("\n");
        }
        printf("\n");*/

        anss[k]=matrixSum();
    }

    printf("%lld",anss[0]);

    for(i=1;i<N;i++)
    {
        printf(" %lld",anss[i]);
    }

    printf("\n");

    return 0;
}
