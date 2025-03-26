/*45. WAP in C to count substring in main string .
  i/p: char m[20]=”abcd cd 12cd”, s[5]=”cd”
           o/p:   count = 3 times */
#include<stdio.h>
void main(){
	char m[20],s[10],temp[10];
	printf("Enter main string:");
	scanf("%[^\n]s",m);
	printf("Enter sub string:");
	scanf("%s",s);
	int i,j,k,ml,sl,count=0;
	for(ml=0;m[ml];ml++);
	for(sl=0;s[sl];sl++);

	//Using for loop
	/*for(i=0;i<=ml-sl;i++){
		for(j=i,k=0;k<sl;j++,k++)
			temp[k]=m[j];
		temp[k]='\0';
		for(k=0;k<sl;k++){
			if(s[k]!=temp[k])
				break;
		}
		if(s[k]==temp[k])
			count++;
	}*/

	//Using while loop
	i=j=k=0;
	while(i<=ml-sl){
		j=i;
		k=0;
		while(k<sl){
			temp[k]=m[j];
			j++;
			k++;
		}
		temp[k]='\0';
		k=0;
		while(k<sl){
			if(s[k]!=temp[k])
				break;
			k++;
		}
		if(s[k]==temp[k])
			count++;
		i++;
	}
	printf("Count = %d times\n",count);
}
