/*22.WAP in C to Capitalize first letter of word in string.
      i/p: char s[30]= “pawan coding sirji ”
             o/p:    Pawan Coding Sirji */
#include<stdio.h>
void main(){
        char s[30];
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        for(int i=0;s[i];i++){
                if(i==0)
                        s[i]=s[i]-32;
                if(s[i]==' ')
                        s[i+1]=s[i+1]-32;
        }
        printf("%s\n",s);
}
