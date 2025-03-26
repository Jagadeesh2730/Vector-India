/*27.WAP in C to reverse 1st word in string using pointer. 
          i/p:  char s[20]=”vector india pvt”;
            o/p:        rotcev india  pvt */
#include<stdio.h>
void main(){
        char s[20],temp;
        printf("Enter the String:");
        scanf("%[^\n]s",s);
        int i,len,count=0;
        for(len=0;s[len]!=' ';len++);
        /*for(i=0;s[i];i++){
                if(i<len/2){
                        temp=s[i];
                        s[i]=s[len-i-1];
                        s[len-i-1]=temp;
                }
        }*/
		for(i=0;s[i] && i<len/2;i++){
			temp=s[i];
			s[i]=s[len-1-i];
			s[len-i-1]=temp;
		}
        printf("%s\n",s);
}
