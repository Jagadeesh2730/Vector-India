/*25.WAP in C to print last word from string using goto.
          i/p:  char s[20]=”vector india coding ”;
            o/p:       coding */
#include<stdio.h>
void main(){
        char s[20];
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        int count,c,i=0;
        count=0;
        L1:
                if(s[i]==' ')
                        count++;
                if(s[i]){
                        i++;
                        goto L1;
                }
        i=0;
        c=0;
        L2:
                if(s[i]==' ')
                        c++;
                i++;
                if(count==c){
                        if(s[i]){
                                printf("%c",s[i]);
                                goto L2;
                        }
                }
                else
                        goto L2;
        printf("\n");
}
