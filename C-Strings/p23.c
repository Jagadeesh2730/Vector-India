/*23.WAP in C to print all word lenght in string . 
           i/p: char s[20]= ”vector india pvt ”
                  o/p:    6   5   3*/
#include<stdio.h>
void main(){
        char s[20];
        int count=0;
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        for(int i=0;s[i];i++){
                if(s[i]==' '){
                        printf("%d ",count);
                        count=0;
                }
                else
                        count++;
        }
        printf("%d\n",count);
}
