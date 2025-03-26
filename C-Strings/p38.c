/* 38. WAP in C to find largest words in string.
     i/p:  char s[20]=”123 vector c  ds”;
          o/p:   vector */
#include<stdio.h>
void main(){
	char s[20],lw[10];
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	int i,l,j,len,max,k;
	l=len=max=0;
	for(i=0;s[i];i++){
		if(s[i]==' '){
			if(l>max){
				for(j=len-l,k=0;k<l;j++,k++){
					lw[k]=s[j];
				}
				lw[k]='\0';
				max=l;
			}
			l=0;
			len++;
		}
		else{
			l++;
			len++;
		}
	}
	if(l>max){
		for(j=len-l,k=0;k<l;k++,j++){
			lw[k]=s[j];
		}
		lw[k]='\0';
	}
	printf("%s\n",lw);
}
