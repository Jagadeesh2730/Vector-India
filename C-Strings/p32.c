/*32.WAP in C to remove conjucutive spaces in string.
     i/p: s[20]=”abc    coding    sirji”
           o/p:   abc coding sirji */
#include<stdio.h>
void main()
{
	char s[20];
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	int i,j;
	//Logic 
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		{
			if(s[i]==s[i+1])
			{
				for(j=i+1;s[j];j++)
					s[j]=s[j+1];
				i--;
			}
		}
	}
	printf("%s\n",s);
}

