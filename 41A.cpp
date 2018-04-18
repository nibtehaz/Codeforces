#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[105],t[105];
	int p,q,i,test=1;
	
	scanf("%s",s);
	scanf("%s",t);
	
	p=strlen(s);
	q=strlen(t);
	
	if(p!=q) test=0;
	
	else
	{
		for(i=0;i<p;i++)
		{
			if(s[i]!=t[p-i-1]) test=0;
		}
	}
	
	if(test) printf("YES\n");
	
	else printf("NO\n");
	
	
	return 0;
}
