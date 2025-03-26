/*43.WAP in C to reverse word lenght > 4 in string.
i/p: char s[20]=“ias abcde mkdir ”;
o/p:char s[20= “ias edcba irdkm ”; */

#include<stdio.h>
void main(){
	char s[30],t;
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	int i,j,k,l=0,len=0;
	for(i=0;s[i];i++){
		if(s[i]==' '){
			if(l>4){
				for(j=len-l,k=0;k<l/2;j++,k++){
					t=s[j];
					s[j]=s[len-k-1];
					s[len-k-1]=t;
				}
			}
			l=0;
			len++;
		}
		else{
			l++;
			len++;
		}
	}
	if(l>4){
		for(j=len-l,k=0;k<l/2;j++,k++){
			t=s[j];
			s[j]=s[len-k-1];
			s[len-k-1]=t;
		}
	}
	printf("%s\n",s);
}
