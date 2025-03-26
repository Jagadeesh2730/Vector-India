/*10.
 WAP in C using function to delete all digits in  
strings and count deleted digits .
  i/p:  char s[20]=”a1b2c3d4123”;
 o/p:
    abcd  , digit count = 7  
 int del_count_fun(char  * s   ); */

#include<stdio.h>
int del_count_fun(char *s);
void main()
{
	char s[20];

	printf("Enter the string:");
	scanf("%[^\n]s",s);
	
	int count=del_count_fun(s);
	
	printf("%s\t,%d\n",s,count);
}
int del_count_fun(char *s)
{
	int i,j,count=0;

	for(i=0;s[i];i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			count++;
			
			for(j=i;s[j];j++)
				s[j]=s[j+1];

			i--;
		}
	}
	return count;
}

