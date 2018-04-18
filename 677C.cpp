
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

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.txt","r",stdin);
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

#define INF 1000000000


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma


     char inp[MAX];
     int len,i,j,zero,one;
     long long int temp,ans;

     while(scanf("%s",inp)!=EOF)
     {
        ans=1;
        temp=1;

        len=strlen(inp);

        for(i=0;i<len;i++)
        {
            if('0'<=inp[i] && inp[i]<='9')
            {
                j=inp[i]-'0';
            }

            else if('A'<=inp[i] && inp[i]<='Z')
            {
                j=inp[i]-'A'+10;
            }

            else if('a'<=inp[i] && inp[i]<='z')
            {
                j=inp[i]-'a'+36;
            }

            else if(inp[i]=='-')
            {
                j=62;
            }

            else
            {
                j=63;
            }


            temp=1;
            one=0;
            
            while(1)
            {
                if(j%2!=0)
                {
                    one++;
                }

                j/=2;

                if(j==0)
                    break;
            }

            zero=6-one;

            while(zero--)
            {
                temp=(temp*3)%MOD;
            }

            ans=(ans*temp)%MOD;
        }

        printf("%lld\n",ans);
     }

    return 0;
}




