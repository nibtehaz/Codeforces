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
#define MAX 200005
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

    char inp[MAX];
    int len,i;

    while(scanf("%s",inp)!=EOF)
    {
        len=strlen(inp);
        int len_=len-1;

        for(i=1;i<len_;i++)
        {
            if(inp[i]==inp[i-1]&&inp[i]==inp[i+1])
            {
                if(inp[i]=='a')
                    inp[i]='b';
                else
                    inp[i]='a';
            }
        }

        for(i=1;i<len;i++)
        {
            if(inp[i]==inp[i-1])
            {
                int j;

                for(j=0;j<26;j++)
                {
                    if((inp[i]!='a'+j)&&(inp[i+1]!='a'+j))
                    {
                        inp[i]='a'+j;
                        break;
                    }
                }
            }
        }

        printf("%s\n",inp );
    }

    return 0;
}