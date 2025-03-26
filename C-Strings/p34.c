/*34.WAP in C to count duplicate char from string.
        i/p: s[20]=”aaababcdeb”
        o/p: a-->4 times b-->3 times */
#include<stdio.h>
void main(){
	char s[20];
	printf("Enter the string:");
	scanf("%s",s);
	int i,j,k,count;
	for(i=0;s[i];i++){
		for(j=i+1,count=1;s[j];j++){
			if(s[i]==s[j]){
				count++;
				for(k=j;s[k];k++)
					s[k]=s[k+1];
				j--;
			}
		}
		if(count>1)
			printf("%c --> %d times\n",s[i],count);
	}
}
