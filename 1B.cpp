/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005


int main()
{
	int N,i,type,len,R,C,column,cnt,row,mod,len2;
	char inp[MAX],ans[20];

	scanf("%d",&N);

	while(N--)
	{
		scanf("%s",inp);
		len=strlen(inp);

		R=-1;
		C=-1;
		type=0;

		for(i=0;i<len;i++)
		{
			if(inp[i]=='R')
				R=i;
			if(inp[i]=='C')
				C=i;
		}

		/**
			type 1 e deya ase R ar C bakita korbo
			type -1 e ber korte hobe R ar C
		*/

		if(R==-1||C==-1)
			type=-1;
		else
		{
			cnt=0;
			for(i=R+1;i<C;i++)
			{
				if(inp[i]<='9' && inp[i]>='0')
					cnt++;


				else
				{
					cnt=0;
					break;
				}
				//printf("%d\n",cnt);
			}
			//printf("loop er baire %d\n",cnt);
			if(cnt==0)
				type=-1;
			else
				type=1;
		}


		if(type==1)
		{
			column=0;
			row=0;

			for(i=1;i<len;i++)
			{
				if(inp[i]=='C')
				{
					i++;
					break;
				}
				if(inp[i]<='9' && inp[i]>='0')
				{
					row=row*10+(inp[i]-'0');
				}

			}

			for(;i<len;i++)
			{
				column=column*10+(inp[i]-'0');
			}

			len2=0;

			while(1)
			{
				mod=column%26;
				column/=26;

				if(mod==0)
				{
					mod=26;
					column--;
				}

				ans[len2++]=mod+'A'-1;

				if(column==0)
					break;

			}

			for(i=len2-1;i>=0;i--)
			{
				printf("%c",ans[i]);
			}



			printf("%d\n",row);

		}

		else
		{
			column=0;
			row=0;

			for(i=0;i<len;i++)
			{
				if(inp[i]<='9' && inp[i]>='0')
				{
					break;
				}
				column=column*26+(inp[i]-'A'+1);
			}

			for(;i<len;i++)
			{
				row=row*10+(inp[i]-'0');
			}

			printf("R%dC%d\n",row,column);

		}

		//printf("%d %d %d\n",type,row,column);

	}


    return 0;

}

