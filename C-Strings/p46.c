/*46. WAP in C delete substring from  main string .
  i/p:  char m[20]=”abc45 vector”,s[10]=”abc”;
    o/p:   char m[20]=”45 vector”; */

#include<stdio.h>
void main(){
	char m[20],s[10],temp[10];
	printf("Enter main string:");
	scanf("%[^\n]s",m);
	printf("Enter sub string:");
	scanf(" %[^\n]s",s);
	int i,j,k,l,ml,sl,found=0;
	for(ml=0;m[ml];ml++);
	for(sl=0;s[sl];sl++);
	//Logic
	for(i=0;i<=ml-sl;i++){
		for(j=i,k=0;k<sl;j++,k++){
			temp[k]=m[j];
		}
		temp[k]='\0';
		for(k=0;k<sl;k++){
			if(s[k]!=temp[k])
				break;
		}
		if(s[k]==temp[k]){
			found=1;
			for(k=0;k<sl;k++){
				for(l=i;m[l];l++)
					m[l]=m[l+1];
			}
		}
	}
	if(found)
		printf("%s\n",m);
	else
		printf("The given sub string is not present\n");
}
