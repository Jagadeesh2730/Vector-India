/*10.WAP in C to reverse string using while loop .
         i/p:  char s[10]=”gnidoc 321”;
           o/p:     123 coding */
#include<stdio.h>
void main(){
        char s[20],temp;
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        //char s[10]="gnidoc 321";
        int i=0,len;
        for(len=0;s[len];len++);
        while(i<len/2){
                temp=s[i];
                s[i]=s[len-1-i];
                s[len-1-i]=temp;
                i++;
        }
        printf("%s\n",s);
}
