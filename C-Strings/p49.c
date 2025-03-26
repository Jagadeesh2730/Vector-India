/* 49.WAP in C to replace one word with another word
   i/p:  char s[20]=”ab123 ab78”,                           
s1[10]=”ab”,s2[10]=’cs’   
      o/p:   char s[20]=”cs123 cs78”; */
#include<stdio.h>
void main(){
	char m[20],s[10],r[10],temp[10];
	printf("Enter main string:");
	scanf("%[^\n]s",m);
	printf("Enter sub string:");
	scanf("%s",s);
	printf("Enter replace string:");
	scanf("%s",r);
	int i,j,k,l,sl,ml;
	for(ml=0;m[ml];ml++);
	for(sl=0;s[sl];sl++);

	for(i=0;i<=ml-sl;i++){
		for(j=i,k=0;k<sl;j++,k++)
			temp[k]=m[j];
		temp[k]='\0';
		for(k=0;k<sl;k++){
			if(s[k]!=temp[k])
				break;
		}
		if(s[k]==temp[k]){
			for(l=i,k=0;k<sl;l++,k++)
				m[l]=r[k];
		}
	}
	printf("%s\n",m);
}

