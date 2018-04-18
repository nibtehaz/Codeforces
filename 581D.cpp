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

#define PI acos(-1.0)
#define MAX 1000015
#define MOD 1000000007
#define EPS 1e-9

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("B-large-practice.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define FPEQUAL(FP1,FP2) fabs(FP1-FP2)<=EPS
#define FPLT(FP1,FP2) (FP1-FP2)<=EPS
#define FPGT(FP1,FP2) (FP1-FP2)>=EPS
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back

#define INF 1000000000

int helper(int l1,int w1 , int c1 , int l2 , int w2 , int c2 , int l3 , int w3 , int c3 , int cube);

int helper(int l1,int w1 , int c1 , int l2 , int w2 , int c2 , int l3 , int w3 , int c3 , int cube)
{
    int i,j;

    if(l2==l3 && l2+w1==cube && w2+w3==cube)
    {
        printf("%d\n",cube);

        for(i=0;i<w1;i++)
        {
            for(j=0;j<cube;j++)
            {
                printf("%c",'A'+c1);
            }
            printf("\n");
        }

        for(i=w1;i<cube;i++)
        {
            for(j=0;j<w2;j++)
            {
                printf("%c",'A'+c2);
            }

            for(j=0;j<w3;j++)
            {
                printf("%c",'A'+c3);
            }

            printf("\n");
        }

        return 1;
    }

    else
        return 0;

}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int l1,w1,l2,w2,l3,w3,area,cube;
    int fnd1,fnd2,fnd3;
    int i,j,k;
    int test;

    //while(1)
    {
        getInt(l1)
        getInt(w1)

        getInt(l2)
        getInt(w2)

        getInt(l3)
        getInt(w3)

        area = l1*w1 + l2*w2 + l3*w3;

        //DEBUG(area)

        for(i=0;;i++)
        {
            if(i*i>area)
            {
                test=0;
                break;
            }

            if(i*i==area)
            {
                test=1;
                cube=i;
                break;
            }
        }

        reverse_flash:

        if(test==0)
        {
            printf("-1\n");
        }

        else
        {

            //DEBUG(cube)

            fnd1=0;
            fnd2=0;
            fnd3=0;

            if(l1==cube || w1==cube)
                fnd1=1;

            if(l2==cube || w2==cube)
                fnd2=1;

            if(l3==cube || w3==cube)
                fnd3=1;

            int fnd=fnd1+fnd2+fnd3;

            if(w1==cube)
            {
                l1=l1^w1;
                w1=l1^w1;
                l1=l1^w1;
            }

            if(w2==cube)
            {
                l2=l2^w2;
                w2=l2^w2;
                l2=l2^w2;
            }

            if(w3==cube)
            {
                l3=l3^w3;
                w3=l3^w3;
                l3=l3^w3;
            }

            if(fnd==1)
            {
                int alike;

                if(l1==cube)
                {
                    if(helper(l1,w1,0,l2,w2,1,l3,w3,2,cube)==1)
                    {
                        goto fin;
                    }

                    else if(helper(l1,w1,0,w2,l2,1,l3,w3,2,cube)==1)
                    {
                        goto fin;
                    }

                    else if(helper(l1,w1,0,w2,l2,1,w3,l3,2,cube)==1)
                    {
                        goto fin;
                    }

                    else if(helper(l1,w1,0,l2,w2,1,w3,l3,2,cube)==1)
                    {
                        goto fin;
                    }

                    else
                    {
                        test=0;
                        goto reverse_flash;
                    }
                }

                if(l2==cube)
                {
                    if(helper(l2,w2,1,l1,w1,0,l3,w3,2,cube)==1)
                    {
                        goto fin;
                    }

                    else if(helper(l2,w2,1,w1,l1,0,l3,w3,2,cube)==1)
                    {
                        goto fin;
                    }

                    else if(helper(l2,w2,1,w1,l1,0,w3,l3,2,cube)==1)
                    {
                        goto fin;
                    }

                    else if(helper(l2,w2,1,l1,w1,0,w3,l3,2,cube)==1)
                    {
                        goto fin;
                    }

                    else
                    {
                        test=0;
                        goto reverse_flash;
                    }
                }

                if(l3==cube)
                {
                    if(helper(l3,w3,2,l2,w2,1,l1,w1,0,cube)==1)
                    {
                        goto fin;
                    }

                    else if(helper(l3,w3,2,w2,l2,1,l1,w1,0,cube)==1)
                    {
                        goto fin;
                    }

                    else if(helper(l3,w3,2,w2,l2,1,w1,l1,0,cube)==1)
                    {
                        goto fin;
                    }

                    else if(helper(l3,w3,2,l2,w2,1,w1,l1,0,cube)==1)
                    {
                        goto fin;
                    }

                    else
                    {
                        test=0;
                        goto reverse_flash;
                    }
                }
            }

            else if(fnd==3)
            {

                //DEBUG("YEs")

                if(w1+w2+w3==cube)
                {
                    printf("%d\n",cube);

                    for(i=0;i<cube;i++)
                    {
                        for(j=0;j<w1;j++)
                        {
                            printf("A");
                        }

                        for(j=0;j<w2;j++)
                        {
                            printf("B");
                        }

                        for(j=0;j<w3;j++)
                        {
                            printf("C");
                        }

                        printf("\n");
                    }
                }

                else
                {
                    test=0;
                    goto reverse_flash;
                }
            }

            else
            {
                test=0;
                goto reverse_flash;
            }
        }

        fin:
            ;

    }


    return 0;
}