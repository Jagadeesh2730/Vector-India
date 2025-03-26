/*26. WAP in C to print  word ending with letter ‘g’.
          i/p:  char s[20]=”c ds coding doing”;
               o/p:     coding  doing  */
#include<stdio.h>
void main(){
        char s[20];
        printf("Enter the string:");
        scanf("%[^\n]s",s);

		int i,sl,end,start=0;

		for(sl=0;s[sl];sl++);

		for(i=0;i<=sl;i++)
		{
			if(s[i]==' ' || s[i]=='\0')
			{
				end=i-1;

				if(s[end]=='g')
				{
					while(start<=end)
					{
						printf("%c",s[start++]);
					}
					printf(" ");
				}

				start=i+1;
			}
		}
		printf("\n");
}
