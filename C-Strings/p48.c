/*48. WAP in C to delete palindrome word from string.
      i/p:  char s[20]=”laxmi madam vector ”
      o/p:     char s[20]=”laxmi vector ” */
#include<stdio.h>
void main(){
	char s[20],temp[10],rev[10];
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	int i,j,k,m,l=0,len=0,found=1;
	//Logic
	for(i=0;s[i];i++){
		if(s[i]==' '){
			temp[l]='\0';
			for(j=0,found=1;j<l/2;j++){
				if(temp[j]!=temp[l-j-1]){
					found=0;
					break;
				}
			}
			if(found){
				for(m=0;m<=l;m++){
					for(k=len-l;s[k];k++)
						s[k]=s[k+1];
					i--;
				}
				len=len-l-1;
			}
			l=0;
			len++;
		}
		else{
		temp[l++]=s[i];
		len++;
		}
	}
	temp[l]='\0';
	for(j=0,found=1;j<l/2;j++){
		if(temp[j]!=temp[l-j-1])
			found=0;
			break;
	}
	if(found){
		for(m=0;m<=l;m++){
			for(k=len-l;s[k];k++)
				s[k]=s[k+1];
			i--;
		}
		len=len-l-1;
	}
	printf("%s\n",s);
}
