/* 37. WAP in C to merge 2 string to another string.
 i/p: s1[10]=”12” s2[10]=”ABCD”
 o/p : s3[20]=”1A2BCD” */

#include<stdio.h>
void main(){
	char s1[10],s2[10],s3[20];
	printf("Enter the string 1:");
	scanf("%s",s1);
	printf("Enter the string 2:");
	scanf("%s",s2);
	int i,j,k;
	i=j=k=0;
	while(s1[i] && s2[j]){
		s3[k++]=s1[i++];
		s3[k++]=s2[j++];
	}
	while(s1[i]){
		s3[k++]=s1[i++];
	}
	while(s2[j]){
		s3[k++]=s2[j++];
	}
	s3[k]='\0';
	printf("%s\n",s3);
}
