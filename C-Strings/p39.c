/*39. WAP in C to find smallest words in string.
     i/p:  char s[20]=”123 vector c  ds”;
              o/p:    c */

#include<stdio.h>
void main(){
	char s[20],sw[10];
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	int i,l,j,len,k,min=100;
	l=len=0;
	for(i=0;s[i];i++){
		if(s[i]==' '){
			if(l<min){
				for(j=len-l,k=0;k<l;j++,k++){
					sw[k]=s[j];
				}
				sw[k]='\0';
				min=l;
			}
			l=0;
			len++;
		}
		else{
			l++;
			len++;
		}
	}
	if(l<min){
		for(j=len-l,k=0;k<l;k++,j++){
			sw[k]=s[j];
		}
		sw[k]='\0';
	}
	printf("%s\n",sw);
}
