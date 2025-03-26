/*21.WAP in C to count words in given string using goto.
       i/p:char s[20]=”hi  5  #$2   cs”;
             o/p: word count= 4*/
#include<stdio.h>
void main(){
        char s[20];
        int count=0;
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        //using for loop
		/*for(int i=0;s[i];i++){
                if(s[i]==' ')
                        count++;
        }*/

		//using goto
		int i=0;
		label:
		if(s[i]==' ')
			count++;
		i++;
		if(s[i])
			goto label;
        printf("Word count = %d\n",count+1);
}
