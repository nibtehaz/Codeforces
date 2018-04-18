/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


int main()
{
    int L[100005]={0,},R[100005]={0,},pos[1000005]={0,},F[100005]={0,};
    int min=1000005,max=0,i,j,n,index=1,ans;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&j);

        if(pos[j]==0)
        {
            pos[j]=index;
            index++;
            L[pos[j]]=i;
            R[pos[j]]=i;
            F[pos[j]]=1;

        }
        else
        {
            R[pos[j]]=i;
            F[pos[j]]++;
        }
        

        if(F[pos[j]]>max)
        {
            max=F[pos[j]];
            min=R[pos[j]]-L[pos[j]];
            ans=pos[j];
        }
        else if(F[pos[j]]==max)
        {
            if(min>(R[pos[j]]-L[pos[j]]))
            {
            	min=R[pos[j]]-L[pos[j]];
            	ans=pos[j];
            }
        }
    }
    printf("%d %d\n",L[ans],R[ans]);


    return 0;



}


