/*31. WAP in C to check string is Palindrome or not.
       i/p: s[20]= “radar”
               o/p:  yes*/
#include<stdio.h>
void main(){
        char s[20];
        int len,i;
        printf("Enter the string:");
        scanf("%s",s);
        for(len=0;s[len];len++);
        for(i=0;i<len/2;i++){
                if(s[i]!=s[len-1-i]){
                        printf("Not a palindrome\n");
                        return;
                }
        }
        printf("Yes it is a palindrome\n");
}
