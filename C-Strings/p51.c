/*51.WAP in C to delete largest word from string.
  i/p:  char s[20]=”c vector ds coder”
      o/p:    char s[20]=”c ds coder” */
#include<stdio.h>
void main(){
	char s[30],lw[10];
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	int i,j,k,index,sl,l=0,max=0,len=0;
	for(sl=0;s[sl];sl++);
	for(i=0;i<=sl;i++){
		if(s[i]==' '||s[i]=='\0'){
			if(l>max){
				for(j=len-l,k=0;k<l;j++,k++){
					lw[k]=s[j];
				}
				lw[k]='\0';
				max=l;
				index=len-l;
			}
			l=0;
			len++;
		}
		else{
			l++;
			len++;
		}
	}
	for(k=0;k<=max;k++){
		for(j=index;s[j];j++){
			s[j]=s[j+1];
		}
	}
	printf("main string:%s\n",s);
	printf("largest word:%s\n",lw);
}
