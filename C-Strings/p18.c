/*18. WAP in C to insert a char at 2nd index in string .
   i/p:    char s[10]=”abcdef” , in=2 , ch=’9’;
          o/p:   ab9cdef  */
#include<stdio.h>
void main(){
        char s[20],ch;
        int i,in,len;
        printf("Enter the string:");
        scanf("%s",s);
        printf("Enter the index:");
        scanf("%d",&in);
        printf("Enter the character:");
        scanf(" %c",&ch);
        for(len=0;s[len];len++);
        for(i=len+1;i>in;i--){
                s[i]=s[i-1];
        }
        s[in]=ch;
        //s[len+1]='\0';
        printf("%s\n",s);
}
