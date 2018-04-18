#include <stdio.h>
#include<string.h>
#include<math.h>


int main()
{
    int n,h[300],i,j,min,p,q,temp;

    scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&h[i]);

        temp=h[1]-h[0];
        if(temp<0) temp=-temp;
        min=temp;
        p=0;
        q=1;


        for(i=0;i<n;i++){
                j=i+1;
        if(j==n) j=0;

        temp=h[i]-h[j];
        if(temp<0) temp=-temp;

                if(temp<min) {
                        min=temp;
                        p=i;
                        q=j;
                }
        }
        printf("%d %d\n",p+1,q+1);




	return 0;
}

