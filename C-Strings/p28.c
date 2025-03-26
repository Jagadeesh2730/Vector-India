/*28. WAP in C to reverse last word in string  .
        i/p:  char s[30]=”vector india coding 123”;
            o/p:        vecor india coding  321
*/
#include<stdio.h>
void main(){
	char s[30];
	printf("Enter the string:");
	scanf("%[^\n]s",s);

	int i,sl,temp,start=0,end;

	for(sl=0;s[sl];sl++);

	/*for(i=0;i<=sl;i++)
	{
		if(s[i]=='\0')
		{
			end=i-1;
			break;
		}
		else if(s[i]==' ')
			start=i+1;
	}

	while(start<end)
	{
		temp=s[start];
		s[start]=s[end];
		s[end]=temp;

		start++;
		end--;
	}*/

	for(i=sl-1;i>=-1;i--)
	{
		if(s[i]==' '|| i==-1)
		{
			start=i+1;

			while(start<sl-1)
			{
				temp=s[start];
				s[start]=s[sl-1];
				s[sl-1]=temp;
				start++;
				sl--;
			}
			break;
		}
	}
	printf("%s\n",s);
}
