/*42.WAP in C to reverse word having digit in string.
i/p: char s[20]=“coding 123abc vector ptr1”;
o/p: char s[20 =”coding cba321 vector 1rtp” */

#include<stdio.h>
void main(){
	char s[30];
	printf("Enter the startring:");
	scanf("%[^\n]s",s);
	int i,sl,j,k,temp,start=0,end;

	for(sl=0;s[sl];sl++);

	for(i=0;i<=sl;i++)
	{
		if(s[i]==' ' || s[i]=='\0')
		{
			end=i-1;
			for(j=start;j<=end;j++)
			{
				if(s[j]>='0' && s[j]<='9')
				{
					while(start<end)
					{
						temp=s[start];
						s[start]=s[end];
						s[end]=temp;

						start++;
						end--;
					}
					break;
				}
			}
			start=i+1;
		}
	}

	printf("%s\n",s);
}

