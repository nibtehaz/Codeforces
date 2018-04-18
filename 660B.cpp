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



int main()
{
    int leftWin[MAX],leftMac[MAX],rightWin[MAX],rightMac[MAX];
    int N,M,i;

    while(scanf("%d%d",&N,&M)!=EOF)
    {
        int lw=0;
        int ln=0;
        int rw=0;
        int rn=0;
        int tot=M;

        for(i=1;i<=2*N;)
        {
            if(tot==0)
                break;
            leftWin[lw++]=i;
            tot--;
            i++;

            if(tot==0)
                break;
            rightWin[rw++]=i;
            tot--;
            i++;
        }


        for(i=1;i<=2*N;)
        {
            if(tot==0)
                break;
            leftMac[ln++]=i+2*N;
            tot--;
            i++;

            if(tot==0)
                break;
            rightMac[rn++]=i+2*N;
            tot--;
            i++;

        }
/*
DEBUG(lw)
DEBUG(rw)
DEBUG(ln)
DEBUG(rn)
        for(i=0;i<lw;i++)
        {
            DEBUG(leftWin[i])
        }
        printf("\n");

        for(i=0;i<ln;i++)
        {
            DEBUG(leftMac[i])
        }
        printf("\n");
        for(i=0;i<rw;i++)
        {
            DEBUG(rightWin[i])
        }        printf("\n");
        for(i=0;i<rn;i++)
        {
            DEBUG(rightMac[i])
        }

        printf("\n");*/
        vector <int> ans;

        for(i=0;i<N;i++)
        {
            if(i<ln)
                ans.pb(leftMac[i]);
            if(i<lw)
                ans.pb(leftWin[i]);
            if(i<rn)
                ans.pb(rightMac[i]);
            if(i<rw)
                ans.pb(rightWin[i]);
        }

        printf("%d",ans[0]);

        for(i=1;i<ans.size();i++)
            printf(" %d",ans[i]);
        printf("\n");
    }

    return 0;
}
