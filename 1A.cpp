#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int n,m,a;

    scanf("%lld %lld %lld",&n,&m,&a);

    if(n%a==0) n=(n/a);
    else n=(n/a)+1;

    if(m%a==0) m=(m/a);
    else m=(m/a)+1;

    printf("%lld\n",n*m);


    return 0;
}
