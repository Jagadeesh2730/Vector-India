/*5. WAP  in C  to add digits in string using char pointer.
        i/p:   char s[20]= “123 hello by6” , *cp;
         o/p:   sum=  12  */
#include<stdio.h>
void main(){
        char s[20];
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        char *cp=s;
        int sum=0;
        for(;*cp;cp++){
                if(*cp>='0' && *cp<='9')
                        sum+=(*cp-48);
        }
        printf("sum = %d\n",sum);
}
