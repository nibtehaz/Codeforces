#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int n,m,t,pos;
    double ln=log(2);
    char name[5][10]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };

    scanf("%d",&n);

    m=(n-1)/5;

    t=(log(m+1)/ln);
    pos=n-(5*(pow(2,t)-1));
    pos=(pos-1)/(pow(2,t));

    printf("%s\n",name[pos]);


    return 0;
}