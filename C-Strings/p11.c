/*11. WAP in C to reverse first  3 letter  from string  .
         i/p:  char s[10]=”gnidoc coding ”;
           o/p:      ingdoc coding */
#include<stdio.h>
void main(){
        char s[20],temp;
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        //char s[10]="gnidoc 321";
        int i=0,len;
        for(len=0;s[len];len++);
        while(i<3/2){
                temp=s[i];
                s[i]=s[3-1-i];
                s[3-1-i]=temp;
                i++;
        }
        printf("%s\n",s);
}
