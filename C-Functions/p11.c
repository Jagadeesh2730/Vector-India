
 /*WAP in C using function to revesre all word in 
string ,count no of word having digits .
  i/p:  char s[20]=”coding  sirji  vec123 A123 ”;
 o/p:
      gnidoc  ijris  321cev  321A  
       word count =  2
 void rev_word_fun(char  * s   );
  int count_word_fun(char  * s   ); */

#include<stdio.h>
void rev_word_fun(char *s);
int count_word_fun(char *s);
void main()
{
	char s[50];

	printf("Enter the string:");
	scanf("%[^\n]s",s);

	printf("Before:%s\n",s);

	rev_word_fun(s);

	printf("After:%s\n",s);

	printf("Word count = %d\n",count_word_fun(s));
}
/*int count_word_fun(char *s)
{
	int i,j,sl,l=0,count=0;
	char temp[10];

	for(sl=0;s[sl];sl++);

	for(i=0;i<=sl;i++)
	{
		if(s[i]==' ' || s[i]=='\0')
		{
			temp[l]='\0';
			for(j=0;temp[j];j++)
			{
				if(temp[j]>='0' && temp[j]<='9')
				{
					count++;
					break;
				}
			}
			l=0;
		}
		else
		{
			temp[l++]=s[i];
		}
	}
	return count;
}*/
int count_word_fun(char *s)
{
	int i,sl,l=0,count=0;
	char *p;

	for(sl=0;s[sl];sl++);

	for(i=0;i<=sl;i++)
	{
		if(*s==' ' || *s=='\0')
		{
			for(p=s-l;p<s;p++)
			{
				if(*p>='0' && *p<='9')
				{
					count++;
					break;
				}
			}
			l=0;
		}
		else
		{
			l++;
		}
		s++;
	}
	return count;
}
void rev_word_fun(char *s)
{
	int i,sl,l=0,len=0;
	char *p,*q,temp;

	for(sl=0;s[sl];sl++);

	for(i=0;i<=sl;i++)
	{
		if(s[i]==' ' || s[i]=='\0')
		{
			for(p=s+len-l,q=s+len-1;p<q;p++,q--)
			{
				temp=*p;
				*p=*q;
				*q=temp;
			}
			l=0;
			len++;
		}
		else
		{
			l++;
			len++;
		}
	}
}




