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

priority_queue<int>pq;

queue <int> minns;

char in1[100005];
int in2[100005];

char op1[MAX];
int op2[MAX];

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int N;
    int i,j;
    char inp[400];
    int pt=0,tt,st=0;

    getInt(N)

    for(i=0;i<N;i++)
    {
        scanf("%s",inp);

        if(!strcmp(inp,"insert"))
        {
            getInt(j)

            in1[i]=1;
            in2[i]=j;

        }

        else if(!strcmp(inp,"getMin"))
        {
            getInt(j)

            in1[i]=2;
            in2[i]=j;

            minns.push(-j);
        }

        else
        {
            in1[i]=3;
        }
    }

    for(i=0;i<N;i++)
    {

        if(in1[i]==1)
        {
            j=in2[i];

            pq.push(-j);  //insert

            op1[pt]=1;
            op2[pt]=j;

            pt++;
        }

        else if(in1[i]==2)
        {
            if(minns.empty()==0)
                minns.pop();

            j=in2[i];
            j=-j;

            while(1)
            {

                if(pq.empty())
                {
                    pq.push(j);

                    op1[pt]=1;  //ins
                    op2[pt]=-j;

                    pt++;

                    op1[pt]=2;  //get
                    op2[pt]=-j;

                    pt++;

                    break;


                }

                else
                {
                    tt=pq.top();
                }


                if(tt>j)
                {
                    op1[pt]=3;  //remove min
                    op2[pt]=-j;
                    pq.pop();

                    pt++;
                }

                else if(tt<j)
                {
                    pq.push(j);

                    op1[pt]=1;  //ins
                    op2[pt]=-j;

                    pt++;
                }

                else
                {
                    op1[pt]=2;  //get
                    op2[pt]=-j;

                    pt++;

                    break;
                }

            }


        }

        else
        {
            if(pq.empty())
            {
                if(minns.empty())
                {
                    op1[pt]=1;
                    op2[pt]=1;

                    pq.push(1);

                    pt++;
                }

                else
                {
                    int candy=minns.front();

                    pq.push(candy);

                    minns.pop();

                    op1[pt]=1;
                    op2[pt]=-candy;
                    pt++;
                }

            }
                    op1[pt]=3;  //remove min
                    op2[pt]=-j;
                    pq.pop();

                    pt++;
        }

    }

    printf("%d\n",pt);
for(i=0;i<pt;i++)
{
    if(op1[i]==1)
        printf("insert %d\n",op2[i]);
    else if(op1[i]==2)
        printf("getMin %d\n",op2[i]);
    else
        printf("removeMin\n");
}


    return 0;
}