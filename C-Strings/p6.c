/*6.WAP in C to print binary of all char in string .
     i/p:   char s[20]=”12 ab  AB”;
       o/p:    */
#include<stdio.h>
void main(){
        char s[20];
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        for(int i=0;s[i];i++){
                printf("%c --> ",s[i]);
                for(int pos=7;pos>=0;pos--){
                        printf("%d",s[i]>>pos&1);
                }
                printf("\n");
        }
}
