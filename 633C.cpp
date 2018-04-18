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
#define MAX 100015
#define MOD 1000000007
#define EPS 1e-9

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.in","r",stdin);
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

map <string,string> dictionary;

bool memo[MAX]={0,};
char inp[MAX],bankk[MAX];
int N,words;

vector <string> backTrack;

bool dp(int index);

bool dp(int index)
{
    if(index==N)
    {
        return true;
    }

    if(memo[index]==1)
        return false;

    memo[index]=1;

    string tempo="";
    int i;

    for(i=index;i<N;i++)
    {
        tempo=tempo+inp[i];

        if(dictionary.find(tempo)!=dictionary.end())
        {
            if(dp(i+1))
            {
                backTrack.pb(tempo);
                return true;
            }
        }
    }

    return false;

}


int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma


    string temp,temp2;
    int i,j;

    getInt(N)
    scanf("%s",inp);

    getInt(words);

    for(i=0;i<words;i++)
    {
        scanf("%s",bankk);
        temp=bankk;
        temp2="";

        for(j=temp.size()-1;j>=0;j--)
        {
            if('A'<=temp[j] && temp[j]<='Z')
            {
                bankk[j]=bankk[j]-'A'+'a';
            }

            temp2=temp2 + bankk[j];
        }

        dictionary[temp2]=temp;
    }

    dp(0);

    printf("%s",dictionary[backTrack[backTrack.size()-1]].c_str());

    for(i=backTrack.size()-2;i>=0;i--)
    {
        printf(" %s",dictionary[backTrack[i]].c_str());
    }

    printf("\n");

    return 0;
}

