#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int i,n,test=1;
    char word[105];

    scanf("%s",word);
    n=strlen(word);


    for(i=0;i<n;i++)
    {
        if(('A'<=word[i])&&('Z'>=word[i])) {continue; }
        else break;
    }

        if(i==n) test=2;

    for(i=1;i<n;i++)
        if(('a'<=word[i])&&('z'>=word[i])) {test=0; break;}

    if(test==0) printf("%s\n",word);

    else if(test==2)
    {
            for(i=0;i<n;i++)
            {
            if(('A'<=word[i])&&('Z'>=word[i])) printf("%c",word[i]+'a'-'A');
            }
            printf("\n");
    }

        else
        {
            if(('a'<=word[0])&&('z'>=word[0])) printf("%c",word[0]-'a'+'A');
            else printf("%c",word[0]);

            for(i=1;i<n;i++)
            {
            if(('A'<=word[i])&&('Z'>=word[i])) printf("%c",word[i]+'a'-'A');
            }
            printf("\n");
        }
    return 0;
}
