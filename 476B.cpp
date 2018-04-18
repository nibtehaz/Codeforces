#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{

	int plus1=0,plus2=0,minus1=0,minus2=0,len,uno=0,i;
	long long int fact[11]={1,1,2,6,24,120,720,5040,40320,362880,3628800};
	char s1[20],s2[20];

	scanf("%s%s",s1,s2);

	len=strlen(s1);

	for(i=0;i<len;i++)
	{
		if(s1[i]=='+') plus1++;
		else minus1++;

		if(s2[i]=='+') plus2++;
		else if (s2[i]=='-') minus2++;
		else uno++;
	}

	plus2=plus1-plus2;
	minus2=minus1-minus2;
	if((plus2<0)||(minus2<0)||(uno<(plus2+minus2)))
		printf("%.12lf\n",0.000);
    else if(plus2==0&&minus2==0)
        printf("%.12lf\n",1.000);

	else
		printf("%.12lf\n",((fact[uno]*1.0)/(1.0*fact[plus2]*fact[minus2]*(1<<(uno)))));


    return 0;
}
