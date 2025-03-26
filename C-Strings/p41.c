/*WAP in C to check 2 strings are anagram or not.
 i/p: char s1[10]=”2h#p”, s2[10]=”&p2h”;
 o/p: Yes both string Anagram */
#include<stdio.h>
void main(){
	char s1[10],s2[10],temp;
	printf("Enter string 1:");
	scanf("%s",s1);
	printf("Enter string 2:");
	scanf("%s",s2);
	int i,j,n1,n2;
	for(n1=0;s1[n1];n1++);
	for(n2=0;s2[n2];n2++);
	if(n1==n2){
		//Sort the Strings
		for(i=0;i<n1-1;i++){
			for(j=0;j<n1-i-1;j++){
				if(s1[j]>s1[j+1]){
					temp=s1[j];
					s1[j]=s1[j+1];
					s1[j+1]=temp;
				}
				if(s2[j]>s2[j+1]){
					temp=s2[j];
					s2[j]=s2[j+1];
					s2[j+1]=temp;
				}
			}
		}
		//Compare the strings
		for(i=0;i<n1;i++){
			if(s1[i]!=s2[i]){
				printf("Both strings are not Anagrams\n");
				return;
			}
		}
		printf("Both strings are Anagrams\n");
	}
	else{
		printf("Both strings are not Anagrams\n");
	}
}
