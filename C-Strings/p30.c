/* 30.  WAP in C to sort the string  in ascending order 
using while loop only . 
           i/p:  char s[10]= ”Aa1Bb2Cc3”;
               o/p:    123ABCabc*/
#include<stdio.h>
void main(){
	char s[20],temp;
	printf("Enter the string:");
	scanf("%s",s);
	int i,j,len;
	for(len=0;s[len];len++);
	//Using selection sort
	for(i=0;s[i];i++){
		for(j=i+1;s[j];j++){
			if(s[i]>s[j]){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	//Using Bubble sort
	/*for(i=0;i<len;i++){
		for(j=0;j<len-1-i;j++){
			if(s[j]>s[j+1]){
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}*/
	printf("%s\n",s);
}

