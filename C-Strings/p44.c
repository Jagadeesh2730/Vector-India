/*44.WAP in C to check substring is present in a
main string or not using nested while loop.
 i/p: char m[20]=”123 abc”, s[10]=”abc”;
 o/p: yes */
#include<stdio.h>
void main(){
	char m[20],s[10],temp[10];
	printf("Enter main string:");
	scanf("%[^\n]s",m);
	printf("Enter sub string:");
	scanf("%s",s);
	int i,j,k,ml,sl,found=0;
	for(ml=0;m[ml];ml++);
	for(sl=0;s[sl];sl++);
	
	//Using for loop
	for(i=0;i<=ml-sl;i++){
		// store the sub string length of main string characters in temp string
		for(j=i,k=0;k<sl;j++,k++)
			temp[k]=m[j];
		temp[k]='\0';
		//Compare the substring and temp string
		for(k=0;k<sl;k++){
			if(s[k]!=temp[k])
				break;  //if one char is not equal no need to check others
		}
		//if last characters are equal then found the substring
		if(s[k]==temp[k]){
			found=1;
			break;
		}
	}

	//Using while loop
	
	/*i=j=k=0;
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
		if(s[k]==temp[k]){
			found=1;
			break;
		}
		i++;
	}*/

	if(found)
		printf("Yes\n");
	else
		printf("No\n");
}
