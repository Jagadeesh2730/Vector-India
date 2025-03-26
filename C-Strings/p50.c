/* 50.WAP in C to replace one word with another word
 in string [word lenght -> same or diffrent] 
       i/p:  char s[30]=”pf123  pf78 pf”,                        
s1[10]=”pf”,s2[10]=’printf’ ;     
      o/p:   char s[20]=”printf123  printf78  printf”; */
#include<stdio.h>
void main(){
	char m[30],s[10],r[10],temp[10];
	printf("Enter main string:");
	scanf("%[^\n]s",m);
	printf("Enter sub string:");
	scanf("%s",s);
	printf("Enter replace string:");
	scanf("%s",r);
	int i,j,k,l,ml,sl,rl;
	for(ml=0;m[ml];ml++);
	for(sl=0;s[sl];sl++);
	for(rl=0;r[rl];rl++);
	for(i=0;i<=ml-sl;i++){
		for(j=i,k=0;k<sl;k++,j++)
			temp[k]=m[j];
		temp[k]='\0';
		for(k=0;k<sl;k++){
			if(s[k]!=temp[k])
				break;
		}
		if(s[k]==temp[k]){
			for(k=0;k<rl-sl;k++){
				for(l=ml+1+k;l>i;l--){
					m[l]=m[l-1];
				}
			}
			for(l=i,k=0;k<rl;l++,k++)
				m[l]=r[k];
			ml=ml+rl-sl;
			i=i+rl-1;
		}
	}
	printf("%s\n",m);
}


