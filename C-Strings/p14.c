/*14.WAP in C to delete 0th index char from string.
        i/p:   char   s[20]=”coding sirji”; 
           o/p:     oding sirji  */
#include<stdio.h>
void main(){
        char s[20];
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        int i,in;
        printf("Enter the index:");
        scanf("%d",&in);
        for(i=in;s[i];i++)
                s[i]=s[i+1];
        printf("%s\n",s);
}
