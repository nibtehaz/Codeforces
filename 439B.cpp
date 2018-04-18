/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void mergesort(int p,int r);
void merge (int p ,int q ,int r);
long long int L[100005],R[100005],array[100005];
void mergesort(int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        mergesort(p,q);
        mergesort(q+1,r);
        merge(p,q,r);
    }

}

void merge (int p ,int q ,int r)
{

    int n1=q-p+1;
    int n2=r-q;
    int i,j,k;

    for(i=0;i<n1;i++)
    {
        L[i]=array[i+p];
    }


    for(j=0;j<n2;j++)
    {
        R[j]=array[j+q+1];
    }

    i=0;
    j=0;

    for(k=p;k<=r;k++)
    {
       if(i<n1&&j<n2)
       {
           if(L[i]<=R[j])
           {
               array[k]=L[i];
               i++;
           }
           else
           {
               array[k]=R[j];
               j++;
           }

       }
       else if(i<n1)
       {

               array[k]=L[i];
               i++;

       }
       else
       {
               array[k]=R[j];
               j++;
       }
    }
}

int main()
{
    long long int n,x,i,j;
    long long int time;

    while(scanf("%lld%lld",&n,&x)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%lld",&array[i]);

        time=0;

        mergesort(0,n-1);

        for(i=0;i<n;i++)
        {
            time+=array[i]*x;

            if(x>1)
                x--;
        }

        printf("%lld\n",time);
    }




    return 0;

}
