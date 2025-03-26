/* 1. WAP in C to scan and print string with space. 
     i/p:     vector india coding  sirji  , char s[30]; 
      o/p:    vector india coding  sirji*/

#include<stdio.h>
void main(){
        char s[30];
        printf("Enter the string:");
        //gets(s);
        //scanf("%[^\n]s",s);
        fgets(s,30,stdin);
        printf("%s\n",s);
}
