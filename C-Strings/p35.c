/*35.WAP in C to reverse all words in string.
      i/p: char s[20]=“coding sirji vector”
       o/p:char s[20]= “gnidoc ijris rotcev” */
#include<stdio.h>
void main(){
	char s[30],temp;
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	printf("Before:%s\n",s);
	int i,j,k,len=0,l=0;
	for(i=0;s[i];i++){
		if(s[i]==' '){
			for(j=len-l,k=0;k<l/2;k++,j++){
				temp=s[j];
				s[j]=s[len-k-1];
				s[len-k-1]=temp;
			}
			len++;
			l=0;
		}
		else{
			len++;
			l++;
		}
	}
	for(j=len-l,k=0;k<l/2;k++,j++){
		temp=s[j];
		s[j]=s[len-1-k];
		s[len-1-k]=temp;
	}
	printf("After:%s\n",s);
}

