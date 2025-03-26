/* 9.
 WAP in C using function to delete the 
duplicate  char  from given string  .
    abc  
  i/p:  char s[20]=”abcaaabbccaa”;
 o/p:
 void del_fun(char  * s   ); */

#include<stdio.h>
void del_fun(char *s);
void main()
{
	char s[20];

	printf("Enter the string:");
	scanf("%s",s);

	printf("Before:%s\n",s);

	del_fun(s);

	printf("After:%s\n",s);
}
void del_fun(char *s)
{
	int i,j,k;

	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				for(k=j;s[k];k++)
					s[k]=s[k+1];

				j--;
			}
		}
	}
}

